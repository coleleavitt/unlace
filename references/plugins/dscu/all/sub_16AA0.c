__int64 __fastcall sub_16AA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128i a5,
        __m128 a6,
        __m128 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v12; // eax
  __int64 v13; // rcx
  _QWORD *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rdx
  _QWORD *v17; // rsi
  __int64 v18; // rbp
  __int64 v19; // rbx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rdi
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 v26; // rax
  _QWORD *v27; // rdi
  const char *v28; // rsi
  const char *v29; // rdx
  const char *v30; // rsi
  _QWORD *v31; // [rsp+0h] [rbp-98h] BYREF
  __int128 v32; // [rsp+8h] [rbp-90h]
  const char *v33; // [rsp+20h] [rbp-78h] BYREF
  __int128 v34; // [rsp+28h] [rbp-70h]
  const char *v35; // [rsp+40h] [rbp-58h] BYREF
  __int128 v36; // [rsp+48h] [rbp-50h]
  unsigned __int64 v37; // [rsp+58h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  if ( a2 == 9 )
  {
    sub_107D0(*(_QWORD **)(a1 + 16), (unsigned __int64)"Loading dyldcache images", 0, a4, a5, a6, a7);
    return 0;
  }
  if ( a2 == 31 )
  {
    v12 = *(_DWORD *)a3;
    v31 = nullptr;
    v32 = 0;
    if ( v12 > 0x2F )
    {
      v13 = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v13 + 8;
    }
    else
    {
      v13 = *(_QWORD *)(a3 + 16) + v12;
      *(_DWORD *)a3 = v12 + 8;
    }
    v14 = *(_QWORD **)v13;
    v15 = *(_QWORD *)(*(_QWORD *)v13 + 8LL);
    if ( v15 )
    {
      v16 = 0;
      v17 = nullptr;
      v18 = 0;
      while ( 1 )
      {
        v19 = *(_QWORD *)(*v14 + 24 * v18 + 8) - *(_QWORD *)(*v14 + 24 * v18);
        v20 = &v17[v16];
        if ( v20 == v17 )
          goto LABEL_17;
        v21 = v17;
        while ( v19 != *v21 )
        {
          if ( v20 == ++v21 )
            goto LABEL_17;
        }
        if ( v21 == v20 )
        {
LABEL_17:
          v22 = v16 + 1;
          if ( *((_QWORD *)&v32 + 1) < v22 )
          {
            v31 = (_QWORD *)qvector_reserve(&v31, v17, v22, 8, a9, a10);
            v20 = &v31[v32];
          }
          ++v18;
          *v20 = v19;
          *(_QWORD *)&v32 = v32 + 1;
          if ( v15 == v18 )
            break;
        }
        else if ( v15 == ++v18 )
        {
          break;
        }
        v17 = v31;
        v16 = v32;
      }
    }
    netnode_supdel_all(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL), 114);
    if ( (_QWORD)v32 == 1 )
    {
      v24 = *(_QWORD *)(a1 + 16);
      v25 = *v31;
      v35 = (const char *)(netnode_altval(*(_QWORD *)(v24 + 104), 6, 65) + v25);
      netnode_supset(*(_QWORD *)(v24 + 104), 6, &v35, 8, 65);
      v26 = *(_QWORD *)(a1 + 16);
      v34 = 0;
      v33 = nullptr;
      if ( netnode_qsupstr(*(_QWORD *)(v26 + 104), &v33, 5, 83) > 0 )
      {
        v27 = *(_QWORD **)(a1 + 16);
        v35 = nullptr;
        v36 = 0;
        v28 = byte_190C8;
        if ( (_QWORD)v34 )
          v28 = v33;
        if ( (unsigned __int8)sub_16180(v27, v28, (__int64 *)&v35) )
        {
          sub_107D0(*(_QWORD **)(a1 + 16), (unsigned __int64)"Rebasing dyldcache modules", 1, 0.0, a5, a6, a7);
          if ( v35 )
          {
            *(_QWORD *)&v36 = 0;
            qfree(v35);
          }
          if ( v33 )
          {
            *(_QWORD *)&v34 = 0;
            qfree(v33);
          }
          v23 = v31;
          if ( !v31 )
            return 0;
LABEL_23:
          *(_QWORD *)&v32 = 0;
          qfree(v23);
          return 0;
        }
        v29 = byte_190C8;
        if ( (_QWORD)v36 )
          v29 = v35;
        v30 = byte_190C8;
        if ( (_QWORD)v34 )
          v30 = v33;
        sub_CA10((__int64)"failed to reload %s: %s\n", v30, v29);
        if ( v35 )
        {
          *(_QWORD *)&v36 = 0;
          qfree(v35);
        }
      }
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(v33);
      }
    }
    else
    {
      sub_CA10((__int64)"warning: multiple rebase deltas detected!\n");
    }
    v23 = v31;
    if ( !v31 )
      return 0;
    goto LABEL_23;
  }
  return 0;
}
