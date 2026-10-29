__int64 __fastcall sub_658D40(_QWORD *a1, __int64 *a2, __int64 a3)
{
  int v4; // r12d
  __int64 v5; // rcx
  int v6; // eax
  int v7; // esi
  unsigned __int8 *v8; // rbx
  __int64 i; // r13
  __int64 result; // rax
  __int16 v11; // ax
  char v12; // r10
  __int16 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rsi
  int v16; // edx
  char v17; // dl
  __int16 dtype_size; // ax
  __int64 v19; // rax
  __int16 v20; // [rsp+0h] [rbp-48h]
  char v21; // [rsp+Fh] [rbp-39h]

  v4 = 0;
  v5 = a1[2];
  v6 = *(unsigned __int16 *)(a3 + 12);
  v7 = *(_DWORD *)(v5 + 104);
  if ( v7 <= v6 && v6 < *(_DWORD *)(v5 + 108) )
    v4 = *(_DWORD *)(*(_QWORD *)(v5 + 112) + 16LL * (v6 - v7) + 8);
  v8 = (unsigned __int8 *)(a3 + 25);
  for ( i = 0; i != 8; ++i )
  {
    result = *v8;
    if ( !(_BYTE)result )
      break;
    if ( (_BYTE)result == 1 )
    {
      dtype_size = get_dtype_size(v8[4]);
      v12 = 0;
      v13 = dtype_size;
      goto LABEL_7;
    }
    result = (unsigned int)(result - 3);
    if ( (unsigned __int8)result <= 1u )
    {
      v11 = sub_54C1C0(a1);
      v12 = 1;
      v13 = v11;
LABEL_7:
      v14 = a2[1];
      v15 = *a2;
      if ( a2[2] < (unsigned __int64)(v14 + 1) )
      {
        v21 = v12;
        v20 = v13;
        v19 = qvector_reserve(a2, v15, v14 + 1, 12);
        v14 = a2[1];
        v12 = v21;
        *a2 = v19;
        v13 = v20;
        v15 = v19;
      }
      result = v15 + 12 * v14;
      *(_QWORD *)result = 0;
      *(_WORD *)(result + 8) = 0;
      ++a2[1];
      v16 = *(unsigned __int16 *)(v8 + 5);
      *(_WORD *)(result + 4) = 0;
      *(_DWORD *)result = v16;
      v17 = 2;
      *(_WORD *)(result + 6) = 8 * v13;
      *(_BYTE *)(result + 9) = i;
      if ( !v12 )
      {
        v17 = (2 * ((dword_238D6C0[i] & v4) != 0)) | 1;
        if ( (v4 & dword_2389980[i]) == 0 )
          v17 = 2 * ((dword_238D6C0[i] & v4) != 0);
      }
      *(_BYTE *)(result + 8) = v17;
    }
    v8 += 24;
  }
  return result;
}

