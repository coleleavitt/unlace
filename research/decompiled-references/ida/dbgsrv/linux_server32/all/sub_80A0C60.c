/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A0C60
// Address: 0x080A0C60

//----- (080A0C60) --------------------------------------------------------
_BYTE *__cdecl sub_80A0C60(int *a1, _BYTE *a2, int a3)
{
  const char *v3; // eax
  int v4; // eax
  _BYTE *v5; // ebp
  _BYTE *v6; // eax
  int v7; // edx
  int *v8; // edx
  char v9; // cl
  int v10; // eax
  int v12; // edx
  int v13; // [esp-18h] [ebp-38h]
  int v14; // [esp-14h] [ebp-34h]
  int v15; // [esp-10h] [ebp-30h]
  unsigned int v16; // [esp+0h] [ebp-20h]

  sub_80A4AC0();
  v16 = (unsigned int)&a2[a3];
  switch ( a1[4] & 0xFFFFFFF )
  {
    case 0:
      v3 = "NO_EVENT";
      break;
    case 1:
      v3 = "PROCESS_STARTED";
      break;
    case 2:
      v3 = "PROCESS_EXITED";
      break;
    case 3:
      v3 = "THREAD_STARTED";
      break;
    case 4:
      v3 = "THREAD_EXITED";
      break;
    case 5:
      v3 = "BREAKPOINT";
      break;
    case 6:
      v3 = "STEP";
      break;
    case 7:
      v3 = "EXCEPTION";
      break;
    case 8:
      v3 = "LIB_LOADED";
      break;
    case 9:
      v3 = "LIB_UNLOADED";
      break;
    case 0xA:
      v3 = "INFORMATION";
      break;
    case 0xB:
      v3 = "PROCESS_ATTACHED";
      break;
    case 0xC:
      v3 = "PROCESS_DETACHED";
      break;
    case 0xD:
      v3 = "PROCESS_SUSPENDED";
      break;
    case 0xE:
      v3 = "TRACE_FULL";
      break;
    default:
      v3 = "???";
      break;
  }
  v4 = sub_80D3B60(a2, a3, "%s ea=%a", (int)v3);
  v5 = &a2[v4];
  switch ( a1[4] & 0xFFFFFFF )
  {
    case 1:
    case 8:
    case 0xB:
      v10 = sub_80D3B60(&a2[v4], a3 - v4, " base=%a size=%a rebase=%a name=%s", a1[8]);
      goto LABEL_17;
    case 2:
    case 4:
      v5 += sub_80D3B60(&a2[v4], a3 - v4, " exit_code=%d", a1[5]);
      v12 = v16 - (_DWORD)v5;
      goto LABEL_18;
    case 3:
    case 9:
    case 0xA:
      if ( (unsigned int)v5 >= v16 )
      {
        if ( !byte_811F8A1 )
          sub_80CFF40(518, v13, v14, v15);
LABEL_44:
        JUMPOUT(0x804FB86);
      }
      v6 = v5 + 1;
      *v5 = 32;
      if ( (unsigned int)(v5 + 1) >= v16 )
      {
        *(_BYTE *)(v16 - 1) = 0;
        v6 = (_BYTE *)(v16 - 1);
      }
      v7 = a1[4] & 0xFFFFFFF;
      if ( (unsigned int)(v7 - 9) > 1 && v7 != 3 )
      {
        if ( !byte_811F8A1 )
          sub_80CFF40(3297, v13, v14, v15);
        goto LABEL_44;
      }
      v8 = &dword_80DDFD8;
      if ( a1[6] )
        v8 = (int *)a1[5];
      v5 = (_BYTE *)(v16 - 1);
      if ( (_BYTE *)(v16 - 1) == v6 )
      {
        v12 = v16 - (_DWORD)v6;
      }
      else
      {
        do
        {
          v9 = *(_BYTE *)v8;
          v8 = (int *)((char *)v8 + 1);
          *v6 = v9;
          if ( !v9 )
          {
            v5 = v6;
            v12 = v16 - (_DWORD)v6;
            goto LABEL_18;
          }
          ++v6;
        }
        while ( v6 != v5 );
        v12 = 1;
      }
      *(_BYTE *)(v16 - 1) = 0;
LABEL_18:
      sub_80D3B60(v5, v12, " pid=%d tid=%d handled=%d", *a1);
      return a2;
    case 5:
      v10 = sub_80D3B60(&a2[v4], a3 - v4, " hea=%a kea=%a", a1[5]);
      goto LABEL_17;
    case 7:
      v10 = sub_80D3B60(&a2[v4], a3 - v4, " code=%x can_cont=%d ea=%a info=%s", a1[5]);
LABEL_17:
      v5 += v10;
      v12 = v16 - (_DWORD)v5;
      goto LABEL_18;
    default:
      v12 = a3 - v4;
      goto LABEL_18;
  }
}
// 80A0F7C: control flows out of bounds to 804FB86
// 80A0F8A: variable 'v13' is possibly undefined
// 80A0F8A: variable 'v14' is possibly undefined
// 80A0F8A: variable 'v15' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811F8A1: using guessed type char byte_811F8A1;
