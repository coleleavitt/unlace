__int64 __fastcall sub_14760(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v5; // eax
  __int64 v6; // r14
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // r15d
  unsigned __int64 v11; // rax
  const char *v12; // rcx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r15
  unsigned int v16; // r13d
  __int64 v17; // r14
  int v18; // r13d
  int v19; // edx
  __int64 v20; // rdi
  const char *v21; // r8
  unsigned __int64 v22; // rsi
  struct _Unwind_Exception *v23; // rbx
  unsigned int v24; // [rsp+4h] [rbp-84h]
  __int64 v25; // [rsp+10h] [rbp-78h]
  unsigned __int64 v26; // [rsp+18h] [rbp-70h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v28; // [rsp+2Ch] [rbp-5Ch] BYREF
  const char *v29; // [rsp+30h] [rbp-58h] BYREF
  __int128 v30; // [rsp+38h] [rbp-50h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v26 = a2;
  v31 = __readfsqword(0x28u);
  v29 = (const char *)a2;
  if ( sub_7BA0((int *)&v27, (__int64 *)&v29, 0) )
  {
    v5 = sub_5F10(a2, (int)v29);
    v6 = v5;
    if ( v5 > 0 )
    {
      v7 = num_flag();
      set_op_type(a2, v7, 0);
      v8 = *(_DWORD *)a1;
      v9 = *(_QWORD *)(a1 + 8);
      v29 = nullptr;
      v10 = v27;
      v30 = 0;
      v11 = (unsigned int)(v8 - 1);
      if ( v11 >= *(_QWORD *)(v9 + 56) )
      {
        v23 = (struct _Unwind_Exception *)sub_59F0();
        if ( v29 )
        {
          *(_QWORD *)&v30 = 0;
          qfree(v29);
        }
        _Unwind_Resume(v23);
      }
      sub_8BD0((__int64)&v29, *(_QWORD *)(*(_QWORD *)(v9 + 48) + 8 * v11), v27, 0x55u);
      v12 = s1;
      if ( (_QWORD)v30 )
        v12 = v29;
      sub_13370(a2, (__int64)"annotation_type: (0x%x) '%s'", v10, v12);
      if ( v29 )
      {
        *(_QWORD *)&v30 = 0;
        qfree(v29);
      }
      v13 = a2 + v6;
      if ( a2 < v13 && a2 >= *(_QWORD *)(a1 + 168) && *(_QWORD *)(a1 + 176) >= v13 )
      {
        v26 = v13;
        if ( sub_7BA0((int *)&v29, (__int64 *)&v26, 0) )
        {
          v16 = (unsigned int)v29;
          sub_13370(v13, (__int64)"%s: 0x%x", "element_count", (_DWORD)v29);
          v14 = v26;
          sub_5F10(v13, v26);
          v25 = v16;
          if ( !v16 )
            return v14;
          v17 = 0;
          while ( 1 )
          {
            v29 = (const char *)v14;
            if ( !sub_7BA0((int *)&v28, (__int64 *)&v29, 0) )
              break;
            v18 = sub_5F10(v14, (int)v29);
            if ( v18 <= 0 )
              break;
            v19 = *(_DWORD *)a1;
            v20 = *(_QWORD *)(a1 + 8);
            v30 = 0;
            v29 = nullptr;
            v24 = v28;
            sub_8910(v20, (__int64)&v29, v19, v28);
            v21 = s1;
            if ( (_QWORD)v30 )
              v21 = v29;
            sub_13370(v14, (__int64)"annotation element[0x%llx]: (0x%x) %s", v17, v24, v21);
            if ( v29 )
            {
              *(_QWORD *)&v30 = 0;
              qfree(v29);
            }
            v22 = v14 + v18;
            if ( v14 >= v22 )
              break;
            if ( v14 < *(_QWORD *)(a1 + 168) )
              break;
            if ( *(_QWORD *)(a1 + 176) < v22 )
              break;
            v14 = sub_14A50(a1, v22, 0xFFFFFFFFLL, a3);
            if ( v14 == -1 )
              break;
            if ( v25 == ++v17 )
              return v14;
          }
        }
      }
    }
  }
  return -1;
}

