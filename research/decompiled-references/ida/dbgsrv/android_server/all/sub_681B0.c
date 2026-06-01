/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_681B0
// Address: 0x00000000000681B0

//----- (00000000000681B0) ----------------------------------------------------
__int64 __fastcall sub_681B0(__int64 a1)
{
  pthread_mutex_t *v1; // x19
  pthread_mutex_t *v3; // x0
  __int64 v4; // x8
  unsigned int v5; // w20
  __int64 v6; // x9
  __int64 *p_align; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  char v16; // [xsp+0h] [xbp-20h]

  v1 = (pthread_mutex_t *)qword_166AA8;
  v3 = qmutex_lock((pthread_mutex_t *)qword_166AA8);
  v4 = *(_QWORD *)(a1 + 56);
  v5 = 0;
  v6 = 1;
  while ( (v4 & v6) != 0 )
  {
    ++v5;
    v6 *= 2;
    if ( v5 >= 0x40 )
    {
      if ( under_debugger )
      {
        __break(1u);
        p_align = &v3->__align;
        qmutex_unlock(v1);
        Unwind_Resume(p_align, v9, v10, v11, v12, v13, v14, v15, v16);
      }
      interr(1443);
      break;
    }
  }
  *(_QWORD *)(a1 + 56) = v4 | v6;
  qmutex_unlock(v1);
  return v5;
}
// 68208: variable 'v4' is possibly undefined
// 68208: variable 'v6' is possibly undefined
// 6823C: variable 'v9' is possibly undefined
// 6823C: variable 'v10' is possibly undefined
// 6823C: variable 'v11' is possibly undefined
// 6823C: variable 'v12' is possibly undefined
// 6823C: variable 'v13' is possibly undefined
// 6823C: variable 'v14' is possibly undefined
// 6823C: variable 'v15' is possibly undefined
// 6823C: variable 'v16' is possibly undefined
// 166AA8: using guessed type __int64 qword_166AA8;
// 168DF0: using guessed type char under_debugger;
