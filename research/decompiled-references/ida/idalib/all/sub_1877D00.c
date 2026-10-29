__int64 __fastcall sub_1877D00(__int64 *a1, int a2, __int64 a3, unsigned int a4)
{
  int v7; // edx
  char v8; // al
  __int64 result; // rax
  __int64 v10; // rax
  char v11; // r8
  __int64 v12; // rdi
  int v13; // esi
  int v14; // eax
  int v15; // r8d
  int v16; // ecx
  __int64 v17; // rax
  bool v18; // al

  v7 = *((_DWORD *)a1 + 4);
  if ( !a3 )
    goto LABEL_17;
  if ( (a3 & 4) == 0 )
  {
LABEL_10:
    v11 = *((_BYTE *)a1 + 34);
LABEL_11:
    v12 = *a1;
    if ( (unsigned int)(v7 - 3) <= 1 )
    {
      v13 = a4 & 1;
      v14 = (a4 >> 2) & 1;
      if ( v11 )
      {
LABEL_13:
        v15 = (a4 >> 2) & 1;
        v16 = 1;
LABEL_14:
        v17 = sub_1A68D90(v12, a2, v7, v16, v15, 0, v13, v14);
        result = sub_1877570(a1, a3, v17, 0);
        if ( !(_BYTE)result )
        {
          result = *((unsigned __int8 *)a1 + 32);
          if ( (_BYTE)result )
            goto LABEL_9;
        }
        return result;
      }
LABEL_22:
      v16 = a4 & 1;
      v15 = (a4 >> 2) & 1;
      goto LABEL_14;
    }
    v18 = v7 == 5 || v7 == 0;
LABEL_20:
    if ( v18 )
    {
      v16 = 0;
      v15 = 0;
      v13 = 0;
      v14 = 0;
      goto LABEL_14;
    }
    v13 = 0;
    v14 = 0;
    if ( v11 )
      goto LABEL_13;
    goto LABEL_22;
  }
  if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
LABEL_17:
    v11 = *((_BYTE *)a1 + 34);
    if ( !v7 )
    {
LABEL_18:
      v12 = *a1;
      v16 = 0;
      v15 = 0;
      v13 = 0;
      v14 = 0;
      v7 = 0;
      goto LABEL_14;
    }
    goto LABEL_11;
  }
  v8 = *(_BYTE *)((a3 & 0xFFFFFFFFFFFFFFF8LL) + 68);
  if ( (v8 & 2) != 0 )
  {
    if ( !v7 )
      goto LABEL_6;
    v12 = *a1;
    if ( (unsigned int)(v7 - 3) <= 1 )
    {
      v13 = a4 & 1;
      v14 = (a4 >> 2) & 1;
      v16 = (unsigned __int8)v13;
      v15 = v14;
      goto LABEL_14;
    }
    v18 = v7 == 5;
    v11 = 0;
    goto LABEL_20;
  }
  if ( v7 )
    goto LABEL_10;
LABEL_6:
  if ( (v8 & 0xC) == 0xC || (v8 & 0xC) == 0 )
    goto LABEL_18;
  result = *((unsigned __int8 *)a1 + 32);
  if ( (_BYTE)result )
  {
LABEL_9:
    v10 = sub_1A68D90(*a1, a2, 5, 0, 0, 0, 0, 0);
    return sub_1877570(a1, a3, v10, 1u);
  }
  return result;
}
