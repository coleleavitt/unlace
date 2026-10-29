unsigned __int64 __fastcall sub_3A3E40(__int64 a1, int a2, char *a3, unsigned __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 *v7; // rax
  __int64 v9; // rsi
  __int64 *v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r13
  __int64 v15; // rbp
  char v16; // al
  unsigned int v17; // ecx
  __int64 *v18; // rbp
  __int64 *v19; // r13
  __int64 v20; // r15
  char *v21; // r14
  __int64 v22; // rdi
  __int64 v24; // rsi
  _BYTE *v25; // rdx
  void *v26; // rsi
  __int64 *v27; // r10
  __int64 v28; // rsi
  _QWORD *v29; // [rsp+0h] [rbp-78h] BYREF
  __int64 v30; // [rsp+8h] [rbp-70h]
  __int64 *v31; // [rsp+10h] [rbp-68h]
  __int64 *v32; // [rsp+18h] [rbp-60h]
  void *ptr[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-40h]

  v30 = a1;
  v34 = __readfsqword(0x28u);
  v4 = a2;
  v5 = 104LL * a2;
  v6 = a1 + v5 + 168;
  if ( *(_QWORD *)(a1 + v5 + 216) )
  {
    v7 = *(__int64 **)(a1 + v5 + 192);
    v9 = a1 + v5 + 184;
    if ( v7 )
    {
      v11 = (__int64 *)(a1 + v5 + 184);
      do
      {
        while ( 1 )
        {
          v12 = v7[2];
          v13 = v7[3];
          if ( v7[4] < a4 )
            break;
          v11 = v7;
          v7 = (__int64 *)v7[2];
          if ( !v12 )
            goto LABEL_7;
        }
        v7 = (__int64 *)v7[3];
      }
      while ( v13 );
LABEL_7:
      if ( (__int64 *)v9 != v11 )
      {
        v14 = v11[5] - 1;
        v29 = (_QWORD *)v11[5];
        if ( v14 < a4 )
        {
          if ( v11[4] == a4 )
          {
            v11 = (__int64 *)sub_3A3560(v30 + v5 + 176, v11, *(_DWORD *)(v30 + 104 * v4 + 232));
          }
          else
          {
            v31 = v11;
            v15 = a4 + 1;
            v16 = must_journal(a1, v9, v13);
            v11 = v31;
            if ( v16 )
            {
              v32 = v31;
              memset(ptr, 0, sizeof(ptr));
              v24 = v31[4];
              v31 = (__int64 *)ptr;
              sub_3A0A80((__int64 *)ptr, v24);
              v25 = ptr[1];
              v26 = ptr[0];
              v27 = v32;
              if ( ptr[2] < (char *)ptr[1] + 1 )
              {
                ptr[0] = (void *)qvector_reserve(v31, ptr[0], (char *)ptr[1] + 1, 1);
                v25 = ptr[1];
                v26 = ptr[0];
                v27 = v32;
              }
              v25[(_QWORD)v26] = 1;
              ++ptr[1];
              v28 = v27[5];
              v32 = v27;
              sub_3A0A80(v31, v28);
              sub_3A0A80(v31, v15);
              add_undo_record(*(unsigned int *)(v30 + 104 * v4 + 240), ptr[0], ptr[1]);
              v11 = v32;
              if ( ptr[0] )
              {
                v31 = v32;
                ptr[1] = nullptr;
                qfree(ptr[0]);
                v11 = v32;
              }
            }
            v11[5] = v15;
          }
          if ( v14 < (unsigned __int64)a3 )
          {
            v17 = *(_DWORD *)(v30 + 104 * v4 + 224);
            *(__m128 *)ptr = _mm_loadh_ps((const double *)&v29);
            v11 = (__int64 *)sub_3A3720((_QWORD *)(v30 + v5 + 176), (__int64 *)ptr, (__int64 *)&ptr[1], v17);
          }
        }
      }
    }
    else
    {
      v11 = (__int64 *)(a1 + v5 + 184);
    }
    v18 = *(__int64 **)(a1 + v5 + 200);
    if ( v11 != v18 )
    {
      v19 = (__int64 *)std::_Rb_tree_decrement(v11);
      if ( (unsigned __int64)a3 < v19[4] )
      {
        v29 = (_QWORD *)(v30 + v5 + 176);
        v31 = (__int64 *)(13 * v4);
        v20 = v30 + 104 * v4;
        while ( 1 )
        {
          v21 = (char *)v19[5];
          v22 = sub_3A3560((__int64)v29, v19, *(_DWORD *)(v20 + 232));
          if ( v21 - 1 < a3 )
            break;
          if ( v19 == v18 )
            return v34 - __readfsqword(0x28u);
          v19 = (__int64 *)std::_Rb_tree_decrement(v22);
          if ( (unsigned __int64)a3 >= v19[4] )
            return v34 - __readfsqword(0x28u);
          v18 = *(__int64 **)(v6 + 32);
        }
        ptr[0] = a3;
        ptr[1] = v21;
        sub_3A3720(v29, (__int64 *)ptr, (__int64 *)&ptr[1], *(_DWORD *)(v30 + 8LL * (_QWORD)v31 + 224));
      }
    }
  }
  return v34 - __readfsqword(0x28u);
}
