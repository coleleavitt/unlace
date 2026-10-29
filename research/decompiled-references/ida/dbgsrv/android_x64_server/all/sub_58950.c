/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58950
// Address: 0x0000000000058950

//----- (0000000000058950) ----------------------------------------------------
__int64 __fastcall sub_58950(__int64 a1, __int64 *a2, _QWORD *a3, char a4)
{
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v10; // rdx
  size_t v11; // r15
  unsigned __int64 v12; // rdi
  unsigned int v13; // esi
  size_t v14; // r12
  unsigned __int64 v15; // rbp
  unsigned int v17; // eax
  unsigned __int32 v18; // edx
  unsigned __int64 v19; // r15
  const void *v20; // rsi
  char *v21; // rdi
  char **v22; // rbp
  char *v23; // rdx
  const void *v24; // rsi
  char *v25; // rdi
  void *v26; // [rsp+8h] [rbp-90h]
  char *v27; // [rsp+8h] [rbp-90h]
  unsigned __int32 v28; // [rsp+14h] [rbp-84h]
  void *v29; // [rsp+18h] [rbp-80h]
  void *dest[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v31; // [rsp+30h] [rbp-68h]
  void *ptr[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v33; // [rsp+50h] [rbp-48h]
  char v34; // [rsp+5Fh] [rbp-39h] BYREF
  unsigned __int64 v35; // [rsp+60h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  v4 = *a2;
  if ( (unsigned __int64)*a2 > 0xFFFFFFFFFFFFFFFBLL )
    goto LABEL_11;
  v5 = a3;
  v7 = v4 + 4;
  v8 = a3[1];
  if ( v4 + 4 > v8 )
    goto LABEL_11;
  v10 = *a3;
  v11 = _byteswap_ulong(*(_DWORD *)(*v5 + v4));
  if ( !a4 )
    v11 = *(unsigned int *)(*v5 + v4);
  if ( v7 > 0xFFFFFFFFFFFFFFFBLL )
    goto LABEL_11;
  v12 = v4 + 8;
  if ( v4 + 8 > v8 )
    goto LABEL_11;
  v13 = *(_DWORD *)(v10 + v7);
  v14 = _byteswap_ulong(v13);
  if ( !a4 )
    v14 = v13;
  if ( v12 <= 0xFFFFFFFFFFFFFFFBLL && (v15 = v4 + 12, v15 <= v8) )
  {
    v17 = *(_DWORD *)(v10 + v12);
    v18 = _byteswap_ulong(v17);
    if ( !a4 )
      v18 = v17;
    v28 = v18;
    *(_OWORD *)ptr = 0;
    v33 = 0;
    if ( (unsigned __int8)sub_587C0((__int64)ptr, v5, v15, v11, 1)
      && (v19 = v15 + ((v11 + 3) & 0xFFFFFFFFFFFFFFFCLL), *(_OWORD *)dest = 0, v31 = 0, ~v19 >= v14)
      && v19 + v14 <= v5[1] )
    {
      dest[1] = nullptr;
      v34 = 0;
      sub_5F0D0((__int64)dest, v14 + 1, &v34);
      *((_BYTE *)dest[0] + v14) = 0;
      memcpy(dest[0], (const void *)(v19 + *v5), v14);
      if ( a1 )
      {
        if ( (void **)a1 != ptr )
        {
          v5 = ptr[1];
          if ( ptr[1] < (char *)&dword_0 + 2 )
          {
            *(_QWORD *)(a1 + 8) = 0;
          }
          else
          {
            v20 = ptr[0];
            if ( (void *)*(_QWORD *)(a1 + 16) >= ptr[1] )
            {
              v21 = *(char **)a1;
            }
            else
            {
              v26 = ptr[0];
              v21 = (char *)qvector_reserve(a1, *(char **)a1, (unsigned __int64)ptr[1], 1u);
              *(_QWORD *)a1 = v21;
              v20 = v26;
            }
            *(_QWORD *)(a1 + 8) = v5;
            memmove(v21, v20, (size_t)v5 - 1);
            *((_BYTE *)v5 + *(_QWORD *)a1 - 1) = 0;
          }
        }
        v22 = (char **)(a1 + 24);
        if ( (void **)(a1 + 24) != dest )
        {
          v5 = dest[1];
          if ( !dest[1] || (v23 = (char *)dest[1] - 1, dest[1] == (char *)&dword_0 + 1) )
          {
            *(_QWORD *)(a1 + 32) = 0;
          }
          else
          {
            v24 = dest[0];
            if ( (void *)*(_QWORD *)(a1 + 40) >= dest[1] )
            {
              v25 = *v22;
            }
            else
            {
              v29 = dest[0];
              v27 = (char *)dest[1] - 1;
              v25 = (char *)qvector_reserve(a1 + 24, *v22, (unsigned __int64)dest[1], 1u);
              *v22 = v25;
              v23 = v27;
              v24 = v29;
            }
            *(_QWORD *)(a1 + 32) = v5;
            memmove(v25, v24, (size_t)v23);
            *((_BYTE *)v5 + *(_QWORD *)(a1 + 24) - 1) = 0;
          }
        }
        *(_DWORD *)(a1 + 48) = v28;
      }
      *a2 = v19 + ((v14 + 3) & 0x1FFFFFFFCLL);
      LOBYTE(v5) = 1;
      if ( dest[0] )
      {
        dest[1] = nullptr;
        qfree(dest[0]);
        dest[0] = nullptr;
        v31 = 0;
      }
    }
    else
    {
      LODWORD(v5) = 0;
    }
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v33 = 0;
    }
  }
  else
  {
LABEL_11:
    LODWORD(v5) = 0;
  }
  return (unsigned int)v5;
}
// 0: using guessed type int dword_0;
