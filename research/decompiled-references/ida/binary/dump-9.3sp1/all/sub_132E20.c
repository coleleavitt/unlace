__int64 __fastcall sub_132E20(__int128 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // r14
  __int64 v9; // rax
  unsigned int v11; // r10d
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // r9d
  unsigned int *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  unsigned int *v20; // r15
  bool v21; // al
  char v22; // al
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // [rsp+8h] [rbp-90h]
  __int64 v30; // [rsp+10h] [rbp-88h]
  __int64 v31; // [rsp+10h] [rbp-88h]
  __int64 v32; // [rsp+28h] [rbp-70h]
  __int64 v33; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v34[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = *((_QWORD *)&a1 + 1);
  v9 = *(_QWORD *)(a1 + 480);
  v34[3] = __readfsqword(0x28u);
  v29 = *(_QWORD *)(v9 + 112);
  sub_1217B0((const __m128i *)a1, *((__int64 *)&a1 + 1), a2);
  sub_1217B0((const __m128i *)a1, a3, a4);
  if ( (a5 & 8) != 0 || (unsigned __int8)sub_130BC0((const __m128i *)a1, *((__int64 *)&a1 + 1), a2, a3, a4, 0) )
  {
    sub_1571F0(a1, *((_QWORD *)&a1 + 1), a2, a3, a4, a5);
  }
  else
  {
    if ( (unsigned __int8)sub_11FD80((char *)a4, v34, 0) && !v34[0] )
    {
      v23 = -1;
      if ( *((_QWORD *)&a1 + 1) )
        v23 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 24LL);
      sub_1207E0((char *)a2, v29, 9, v23, 2 * *(_DWORD *)(a2 + 4));
      goto LABEL_4;
    }
    if ( *(_BYTE *)a4 != 4
      || !(unsigned __int8)sub_132AB0(
                             (const __m128i *)a1,
                             *((__int64 *)&a1 + 1),
                             a2,
                             a3,
                             *(unsigned int **)(a4 + 8),
                             *(_DWORD *)(a4 + 4)) )
    {
      *((_QWORD *)&a1 + 1) = a2;
      v33 = v6;
      v13 = sub_129440(a1, (__int64)&v33, 1);
      if ( v13 )
      {
        if ( *(_DWORD *)(v13 + 68) == *(_DWORD *)(a2 + 4) && *(_DWORD *)v13 != 1 )
        {
          v32 = v13;
          if ( !sub_11F430((_BYTE *)v13, *(_QWORD *)(v29 + 96), 0, v14, v13, v15) )
          {
            if ( *(_DWORD *)v32 == 4 )
            {
              sub_123A40((__int64)v34, (unsigned __int8 *)(v32 + 32), v24, v25);
              v31 = v33;
              if ( (unsigned __int8)sub_132E20(a1, v33, (unsigned int)v34, a3, a4, a5)
                || (unsigned __int8)sub_1321C0((const __m128i *)a1, v6, a2, v31, (__int64)v34)
                && (unsigned __int8)sub_1301F0((const __m128i *)a1, a3, a4, v31, (__int64)v34) )
              {
                sub_11CA10((char *)a2, (char *)v34);
                sub_11CDA0((__int64)v34);
                goto LABEL_4;
              }
              sub_11CDA0((__int64)v34);
            }
            else if ( *(_BYTE *)a4 == 4 )
            {
              v26 = *(_QWORD *)(a4 + 8);
              if ( *(_DWORD *)v26 == 11 && *(_BYTE *)(v26 + 32) == 4 )
              {
                v30 = *(_QWORD *)(a4 + 8);
                if ( sub_125B90(*(unsigned __int8 **)(v26 + 40), v29, (unsigned int *)v32, 0) )
                {
                  if ( *(_DWORD *)(*(_QWORD *)(v30 + 40) + 68LL) == *(_DWORD *)(a2 + 4) + *(_DWORD *)(a4 + 4) )
                  {
                    if ( a2 != v30 + 32 )
                    {
                      sub_11CDA0(a2);
                      sub_123A40(a2, (unsigned __int8 *)(v30 + 32), v27, v28);
                    }
                    goto LABEL_4;
                  }
                }
              }
            }
          }
        }
      }
      *((_QWORD *)&a1 + 1) = a4;
      v33 = a3;
      v16 = (unsigned int *)sub_129440(a1, (__int64)&v33, 1);
      v11 = 0;
      v20 = v16;
      if ( !v16 )
        return v11;
      if ( *v16 == 1 )
        return v11;
      v21 = sub_11F430(v16, *(_QWORD *)(v29 + 96), 0, v17, v18, v19);
      v11 = 0;
      if ( v21 )
        return v11;
      v22 = sub_132AB0((const __m128i *)a1, v6, a2, v33, v20, *(_DWORD *)(a4 + 4));
      v11 = 0;
      if ( !v22 )
        return v11;
    }
  }
LABEL_4:
  if ( (a5 & 4) == 0 )
    sub_12AB50((unsigned __int8 *)a2, v29, *(_DWORD *)(a2 + 4), 2);
  return 1;
}
