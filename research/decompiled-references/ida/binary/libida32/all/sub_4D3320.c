unsigned __int64 __fastcall sub_4D3320(char a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // r13
  _QWORD *v7; // rbp
  _DWORD *v8; // rbx
  const char *v9; // r8
  size_t v10; // rbx
  int *v11; // rax
  int *v12; // rdx
  int *v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rax
  void *v16; // rdi
  void *v17; // r15
  void *v18; // rdi
  void *v19; // rdi
  _QWORD *v21; // [rsp+8h] [rbp-70h]
  const char *src; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( a1 < 0 )
  {
    if ( qword_2CA2088 )
      qmutex_lock(qword_2CA2088);
    v6 = qword_2CA2080;
    v21 = nullptr;
    if ( !qword_2CA2080 )
      goto LABEL_37;
    do
    {
      v7 = v6;
      v6 = (_QWORD *)*v6;
      if ( v7[24] )
      {
        v21 = v7;
      }
      else
      {
        if ( v21 )
          *v21 = v6;
        else
          qword_2CA2080 = v6;
        if ( (debug & 0x20) != 0 )
          sub_383DA0();
        v8 = (_DWORD *)v7[6];
        if ( v8 )
        {
          if ( *((char *)v7 + 144) < 0 )
            sub_4CE720((__int64)v7, nullptr, a3, a4, a5, a6);
          sub_4D24B0(v8, (__int64)(v7 + 7), a3, a4, a5, a6);
          v7[6] = 0;
        }
        v9 = (const char *)v7[1];
        ptr = nullptr;
        v24 = 0;
        if ( v9 )
        {
          src = v9;
          v10 = strlen(v9);
          ptr = (void *)qvector_reserve(&ptr, 0, v10 + 1, 1);
          *(_QWORD *)&v24 = v10 + 1;
          memmove(ptr, src, v10);
          *((_BYTE *)ptr + v10) = 0;
        }
        v11 = (int *)sub_4BDDB0((__int64)&unk_2CA2020, (__int64)&ptr);
        v13 = v12;
        if ( (int *)qword_2CA2038 == v11 && &dword_2CA2028 == v12 )
        {
          sub_4CE240((_QWORD *)qword_2CA2030);
          qword_2CA2038 = (__int64)&dword_2CA2028;
          qword_2CA2030 = 0;
          qword_2CA2040 = (__int64)&dword_2CA2028;
          qword_2CA2048 = 0;
        }
        else if ( v12 != v11 )
        {
          do
          {
            v14 = std::_Rb_tree_increment();
            v15 = std::_Rb_tree_rebalance_for_erase();
            v16 = *(void **)(v15 + 32);
            v17 = (void *)v15;
            if ( v16 )
            {
              *(_QWORD *)(v15 + 40) = 0;
              qfree(v16);
            }
            operator delete(v17, 0x40u);
            --qword_2CA2048;
          }
          while ( v13 != (int *)v14 );
        }
        if ( ptr )
        {
          *(_QWORD *)&v24 = 0;
          qfree(ptr);
        }
        qfree((void *)v7[1]);
        v7[1] = 0;
        qfree((void *)v7[2]);
        v7[2] = 0;
        qfree((void *)v7[19]);
        v18 = (void *)v7[23];
        v7[19] = 0;
        v7[6] = 0;
        *v7 = 0;
        if ( v18 )
        {
          v7[24] = 0;
          qfree(v18);
        }
        v19 = (void *)v7[20];
        if ( v19 )
        {
          v7[21] = 0;
          qfree(v19);
        }
        operator delete(v7, 0xD0u);
      }
    }
    while ( v6 );
    if ( !qword_2CA2080 )
    {
LABEL_37:
      sub_4CE240((_QWORD *)qword_2CA2030);
      qword_2CA2030 = 0;
      qword_2CA2038 = (__int64)&dword_2CA2028;
      qword_2CA2040 = (__int64)&dword_2CA2028;
      qword_2CA2048 = 0;
    }
    if ( qword_2CA2088 )
      qmutex_free(qword_2CA2088);
    qword_2CA2088 = nullptr;
  }
  return v25 - __readfsqword(0x28u);
}

