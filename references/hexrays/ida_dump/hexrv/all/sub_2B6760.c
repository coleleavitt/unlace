unsigned __int64 __fastcall sub_2B6760(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // r14
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned int tinfo_size; // eax
  __int64 v10; // rbp
  size_t v11; // r8
  __int64 v12; // r12
  void *v13; // r9
  size_t v14; // r10
  __int64 v15; // rsi
  size_t v16; // rdx
  __int64 v17; // rax
  _DWORD *exception; // rbx
  size_t v19; // [rsp+0h] [rbp-78h]
  size_t v20; // [rsp+8h] [rbp-70h]
  void *v21; // [rsp+10h] [rbp-68h]
  size_t v22; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(a1 + 32);
  if ( v2 )
  {
    v4 = v2[1];
    if ( v4 )
    {
      sub_32CDA0(a2, v4);
      if ( v2[1] )
      {
        v8 = 0;
        do
        {
          v10 = *v2 + 80 * v8;
          *(_OWORD *)n = 0;
          src = nullptr;
          if ( !(unsigned __int8)append_argloc(&src) )
          {
            exception = __cxa_allocate_exception(0x30u);
            *(_QWORD *)exception = off_4AE750;
            exception[2] = -22;
            *((_QWORD *)exception + 2) = -1;
            sub_7D4C0((__int64)(exception + 6), "argloc too complex to serialize");
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_76140);
          }
          sub_32CDA0(a2, LODWORD(n[0]));
          v11 = n[0];
          v12 = a2[1];
          v13 = src;
          v14 = n[0];
          if ( v12 )
          {
            --v12;
            v14 = n[0] + v12;
          }
          v15 = *a2;
          v16 = v14 + 1;
          if ( a2[2] < v14 + 1 )
          {
            v22 = v14;
            v21 = src;
            v20 = n[0];
            v19 = v14 + 1;
            v17 = qvector_reserve(a2, v15, v16, 1);
            v14 = v22;
            v13 = v21;
            *a2 = v17;
            v15 = v17;
            v11 = v20;
            v16 = v19;
          }
          a2[1] = v16;
          *(_BYTE *)(v15 + v14) = 0;
          memmove((void *)(v12 + *a2), v13, v11);
          if ( src )
          {
            n[0] = 0;
            qfree(src);
          }
          ++v8;
          tinfo_size = get_tinfo_size(0, *(_QWORD *)(v10 + 24), 0);
          sub_32CDA0(a2, tinfo_size);
          sub_2B2170(a2, v10 + 24);
        }
        while ( v8 < v2[1] );
      }
    }
    v5 = a2[1];
    if ( v5 <= 8 )
    {
      if ( (unsigned __int64)a2[2] <= 9 )
      {
        sub_2A91E0(a2, 10);
        v5 = a2[1];
      }
      memset((void *)(*a2 + v5), 0, 10 - v5);
      v7 = *a2;
      a2[1] = 10;
      *(_BYTE *)(v7 + 9) = 0;
    }
  }
  return v25 - __readfsqword(0x28u);
}
