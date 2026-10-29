__int64 __fastcall sub_1846140(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  _QWORD *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 *v28; // r8
  __int64 v29; // rdi
  __int64 v30; // r14
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rsi
  _QWORD *v33; // rcx
  __int64 v34; // r9
  unsigned __int64 v35[6]; // [rsp+0h] [rbp-30h] BYREF

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(result + 16) == 48 )
  {
    v9 = sub_F63270(result, a2, (__int64)a3, a4, a5, a6);
    sub_7052B0((__int64 *)(v9[13] + 96LL), v9[13], v10, v11, v12, v13);
    v18 = v9[16];
    v19 = (*(_BYTE *)(v18 + 24) & 1) != 0 ? sub_B96980(v18) : *(_QWORD *)(v18 + 24);
    sub_7052B0((__int64 *)(v9[13] + 96LL), v9[13], v14, v15, v16, v17);
    v20 = v9[13];
    v21 = v19 + 24LL * *(unsigned int *)(v9[16] + 16LL);
    result = (__int64)sub_7052B0((__int64 *)(v20 + 96), v20, v22, v23, v24, v25);
    v29 = v9[16];
    if ( (*(_BYTE *)(v29 + 24) & 1) != 0 )
    {
      result = sub_B96980(v29);
      v30 = result;
    }
    else
    {
      v30 = *(_QWORD *)(v29 + 24);
    }
    if ( v21 != v30 )
    {
      while ( 1 )
      {
        v31 = *(_QWORD *)(**(_QWORD **)(v30 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v31 + 8) & 0xF) != 0 )
          v31 = sub_F64F00(**(_QWORD **)(v30 + 16), v20, v26, v27, (__int64)v28);
        v26 = *(unsigned __int8 *)(a2 + 20);
        v32 = *(_QWORD *)(*(_QWORD *)&byte_8[v31 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
        v35[0] = v32;
        if ( (_BYTE)v26 )
        {
          v33 = *(_QWORD **)a2;
          v34 = *(unsigned int *)(a2 + 12);
          v28 = (unsigned __int64 *)(*(_QWORD *)a2 + 8 * v34);
          if ( *(unsigned __int64 **)a2 != v28 )
          {
            result = *(_QWORD *)a2;
            if ( v32 == *v33 )
            {
LABEL_30:
              v26 = 0;
              goto LABEL_17;
            }
            while ( 1 )
            {
              result += 8;
              if ( v28 == (unsigned __int64 *)result )
                break;
              if ( *(_QWORD *)result == v32 )
                goto LABEL_30;
            }
          }
          if ( (unsigned int)v34 < *(_DWORD *)(a2 + 8) )
          {
            *(_DWORD *)(a2 + 12) = v34 + 1;
            *v28 = v32;
            v33 = *(_QWORD **)a2;
            result = *(_QWORD *)a2 + 8 * v34;
LABEL_17:
            v20 = *(unsigned int *)(a2 + 12);
            v27 = (__int64)&v33[v20];
            goto LABEL_18;
          }
        }
        result = sub_2236760(a2, v32);
        v33 = *(_QWORD **)a2;
        if ( *(_BYTE *)(a2 + 20) )
          goto LABEL_17;
        v20 = *(unsigned int *)(a2 + 8);
        v27 = (__int64)&v33[v20];
LABEL_18:
        if ( v27 != result && *(_QWORD *)result >= 0xFFFFFFFFFFFFFFFELL )
        {
          result += 8;
          do
          {
            v20 = result;
            if ( v27 == result )
              break;
            result += 8;
          }
          while ( *(_QWORD *)v20 >= 0xFFFFFFFFFFFFFFFELL );
        }
        if ( (_BYTE)v26 )
        {
          v20 = a2;
          v30 += 24;
          result = sub_1846140(a1, a2, v35);
          if ( v21 == v30 )
            return result;
        }
        else
        {
          v30 += 24;
          if ( v30 == v21 )
            return result;
        }
      }
    }
  }
  return result;
}
