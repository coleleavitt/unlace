/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807A1C0
// Address: 0x0807A1C0

//----- (0807A1C0) --------------------------------------------------------
int __cdecl sub_807A1C0(int a1, char *s2, char a3, int a4)
{
  int v4; // kr00_4
  int (__cdecl ***v5)(_DWORD, char *); // eax
  unsigned int v6; // eax
  int result; // eax
  char v8; // al
  unsigned __int8 v9; // dl
  void **v10; // ebp
  _BYTE *v11; // edx
  void *v12; // eax
  int v13; // ecx
  void **v14; // ebp
  _BYTE *v15; // edx
  void *v16; // eax
  int v17; // [esp-18h] [ebp-48h]
  int v18; // [esp-14h] [ebp-44h]
  int v19; // [esp-10h] [ebp-40h]
  char v20; // [esp+0h] [ebp-30h]
  int v21; // [esp+Ch] [ebp-24h] BYREF
  unsigned int v22; // [esp+10h] [ebp-20h]

  v22 = __readgsdword(0x14u);
  v4 = sub_8079A20((int *)a1, s2, &v21);
  switch ( v21 )
  {
    case 0:
    case 5:
      v5 = *(int (__cdecl ****)(_DWORD, char *))(a1 + 224);
      if ( v5 )
      {
        v6 = (**v5)(v5, s2);
        if ( v6 != -1 )
        {
          sub_80792A0(a1, v6);
          goto LABEL_5;
        }
      }
      sub_80C7910(0, s2);
LABEL_37:
      result = 53;
      goto LABEL_6;
    case 1:
      if ( a3 )
      {
        v8 = 64;
        v9 = 64;
      }
      else
      {
        v8 = 96;
        v9 = 96;
      }
      if ( (unsigned __int16)v4 > 0xFu )
        goto LABEL_11;
      goto LABEL_30;
    case 2:
      if ( a3 )
      {
        if ( *(_DWORD *)(a1 + 100) && !v4 )
        {
          result = 1539;
          goto LABEL_6;
        }
        v13 = (unsigned __int16)v4;
        v8 = 80;
        v9 = 80;
      }
      else
      {
        v13 = (unsigned __int16)v4;
        v8 = 112;
        v9 = 112;
      }
      if ( v13 > 15 )
      {
LABEL_11:
        sub_8078220(a1, v9, v4);
      }
      else
      {
LABEL_30:
        v14 = *(void ***)(a1 + 108);
        v20 = v4 + v8;
        *(_BYTE *)(a1 + 116) = v4 + v8;
        v15 = v14[1];
        v16 = *v14;
        if ( v14[2] < v15 + 1 )
        {
          v16 = sub_80CF920((int)v14, v16, (unsigned int)(v15 + 1), 1u);
          v15 = v14[1];
          *v14 = v16;
        }
        v15[(_DWORD)v16] = v20;
        v14[1] = (char *)v14[1] + 1;
        ++*(_DWORD *)(a1 + 112);
      }
LABEL_12:
      if ( a4 )
      {
        if ( v22 == __readgsdword(0x14u) )
          return sub_8079CC0((int *)a1, a4);
LABEL_41:
        sub_80D7AB0();
      }
LABEL_5:
      result = 0;
LABEL_6:
      if ( v22 != __readgsdword(0x14u) )
        goto LABEL_41;
      return result;
    case 3:
      sub_80790F0(a1, a3 == 0 ? -43 : -39, v4);
      goto LABEL_12;
    case 4:
      if ( a3 )
        result = sub_8079930(a1, s2);
      else
        result = sub_8079840(a1, s2);
      if ( result )
        goto LABEL_6;
      goto LABEL_12;
    case 6:
      if ( a3 )
        goto LABEL_37;
      sub_8078F10(a1, s2, 0);
      v10 = *(void ***)(a1 + 108);
      *(_BYTE *)(a1 + 116) = -82;
      v11 = v10[1];
      v12 = *v10;
      if ( v10[2] < v11 + 1 )
      {
        v12 = sub_80CF920((int)v10, v12, (unsigned int)(v11 + 1), 1u);
        v11 = v10[1];
        *v10 = v12;
      }
      v11[(_DWORD)v12] = -82;
      v10[1] = (char *)v10[1] + 1;
      ++*(_DWORD *)(a1 + 112);
      goto LABEL_12;
    default:
      if ( byte_811F8A1 )
        JUMPOUT(0x804D9C2);
      if ( v22 == __readgsdword(0x14u) )
        sub_80CFF40(271, v17, v18, v19);
      goto LABEL_41;
  }
}
// 807A4A1: control flows out of bounds to 804D9C2
// 807A4BC: variable 'v17' is possibly undefined
// 807A4BC: variable 'v18' is possibly undefined
// 807A4BC: variable 'v19' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
