__int64 __fastcall sub_470CB0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r13
  _DWORD *v9; // rax
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 *v13; // rbx
  __int64 *v14; // r13
  __int64 v15; // r15
  __int64 v16; // r14
  unsigned int v17; // edx
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 i; // rax
  _QWORD *v22; // [rsp+8h] [rbp-D0h]
  _QWORD *v23; // [rsp+10h] [rbp-C8h]
  unsigned int v24; // [rsp+18h] [rbp-C0h]
  unsigned int v25; // [rsp+1Ch] [rbp-BCh]
  _QWORD v26[23]; // [rsp+20h] [rbp-B8h] BYREF

  v26[0] = a2;
  v25 = 16;
  v3 = v26;
  result = 1;
  v23 = v26;
  while ( (_DWORD)result )
  {
    v5 = v3[(unsigned int)(result - 1)];
    v24 = result - 1;
    if ( (unsigned __int8)sub_4478E0(*(_QWORD *)(a1 + 16), v5) )
    {
      v3 = v23;
      result = v24;
    }
    else
    {
      sub_4478F0(*(_QWORD *)(a1 + 16), v5, 1u);
      v6 = *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)(v5 + 24) - 1) + 32);
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
      if ( !(unsigned __int8)sub_15D37A0(v7 + 136, v5)
        && !(unsigned __int8)sub_15D37A0(v7 + 24, v5)
        && (unsigned __int8)sub_4A7E40(v7, *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)(v5 + 24) - 1) + 32))
        && (!*(_WORD *)(v5 + 4) && (v9 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL)) != nullptr && !*v9 && v9[1] == 14
         || (unsigned __int8)sub_3D45E0(*(_QWORD *)(a1 + 8), v6))
        && !(unsigned __int8)sub_3D4D90(v6, *(_QWORD *)(a1 + 8)) )
      {
        sub_4479D0(*(_QWORD *)(a1 + 16), v6);
        goto LABEL_11;
      }
      v8 = *(unsigned int *)(v5 + 24);
      if ( !(_DWORD)v8 )
        goto LABEL_11;
      v10 = (unsigned int)(v8 - 1);
      v11 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v11 + 848) == sub_15D1F10(*(_QWORD *)(v5 + 8 * v10 + 32)) )
      {
        v13 = (__int64 *)(v5 + 32);
        v14 = &v13[v8];
      }
      else
      {
        v12 = v10;
        v13 = (__int64 *)(v5 + 32);
        v14 = &v13[v12];
        if ( !(v12 * 8) )
          goto LABEL_11;
      }
      do
      {
        v15 = *(_QWORD *)(a1 + 16);
        v16 = *v13;
        if ( (unsigned __int8)sub_15D37A0(*(_QWORD *)(v15 + 16) + 80LL, *v13) && !(unsigned __int8)sub_4478E0(v15, v16) )
        {
          v17 = v24;
          if ( v24 >= v25 )
          {
            v19 = sub_186B270(16LL * v25);
            v17 = v24;
            v18 = (_QWORD *)v19;
            if ( v24 )
            {
              if ( v24 - 1 <= 2 || (_QWORD *)v19 == v23 + 1 )
              {
                for ( i = 0; i != v24; ++i )
                  v18[i] = v23[i];
              }
              else
              {
                v20 = 0;
                do
                {
                  *(__m128i *)&v18[v20] = _mm_loadu_si128((const __m128i *)&v23[v20]);
                  v20 += 2;
                }
                while ( 2LL * (v24 >> 1) != v20 );
                if ( (v24 & 1) != 0 )
                  v18[v24 & 0xFFFFFFFE] = v23[v24 & 0xFFFFFFFE];
              }
            }
            if ( v23 && v23 != v26 )
            {
              v22 = v18;
              sub_186B220(v23);
              v17 = v24;
              v18 = v22;
            }
            v23 = v18;
            v25 *= 2;
          }
          else
          {
            v18 = v23;
          }
          v18[v17] = v16;
          v24 = v17 + 1;
        }
        ++v13;
      }
      while ( v14 != v13 );
LABEL_11:
      result = v24;
      v3 = v23;
    }
  }
  if ( v3 )
  {
    if ( v3 != v26 )
      return sub_186B220(v3);
  }
  return result;
}

