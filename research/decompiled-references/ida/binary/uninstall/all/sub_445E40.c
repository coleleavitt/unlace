__int64 __fastcall sub_445E40(
        __int64 a1,
        char *a2,
        int a3,
        char a4,
        __int64 a5,
        char *a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        int a11)
{
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r15
  char *v13; // rbp
  char *v14; // rbx
  int v15; // r13d
  unsigned __int64 v16; // r14
  char v17; // cl
  __int64 v19; // rdi
  int v20; // eax
  unsigned int v21; // [rsp+Ch] [rbp-4Ch]
  int v22; // [rsp+10h] [rbp-48h]
  unsigned __int16 v23[25]; // [rsp+26h] [rbp-32h] BYREF

  v11 = (unsigned __int64)&a2[a3];
  v12 = v11;
  v13 = a6;
  v14 = a2;
  if ( (a4 & 2) == 0 )
    v12 = v11 - 3;
  v15 = 0;
  v21 = 0;
  v22 = (int)a6;
  v16 = (unsigned __int64)&a6[a7 - 3];
  if ( (unsigned __int64)a2 < v11 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v14 > v12 && !(unsigned int)sub_49BD40(v14, (unsigned int)(v11 - (_DWORD)v14)) )
      {
        v21 = -1;
        goto LABEL_10;
      }
      if ( (unsigned __int64)v13 > v16 )
        break;
      v17 = *v14;
      if ( *v14 >= 0 && (v17 != 0 || a11 != 0) )
      {
        *v13 = v17;
        ++v14;
        ++v13;
        ++v15;
      }
      else if ( a11 == 1 && v17 == -64 && (unsigned __int64)(v14 + 1) < v11 && v14[1] == (char)0x80 )
      {
        *v13 = 0;
        v14 += 2;
        ++v13;
        ++v15;
      }
      else
      {
        if ( (unsigned int)sub_49BD40(v14, (unsigned int)(v11 - (_DWORD)v14)) )
        {
          v20 = sub_49BBC0(v14, v23);
          v19 = v23[0];
          v14 += v20;
        }
        else
        {
          LOWORD(v19) = (unsigned __int8)*v14++;
          v23[0] = v19;
          v19 = (unsigned __int16)v19;
        }
        ++v15;
        v13 += (int)sub_49BA90(v19, v13);
      }
      if ( (unsigned __int64)v14 >= v11 )
        goto LABEL_10;
    }
    v21 = -4;
  }
LABEL_10:
  *a8 = (_DWORD)v14 - (_DWORD)a2;
  *a9 = (_DWORD)v13 - v22;
  *a10 = v15;
  return v21;
}

