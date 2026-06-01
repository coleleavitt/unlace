__int64 __fastcall sub_278FC0(__int64 a1, __int64 a2, _BYTE *a3, int *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  int tinfo_size; // eax
  int v11; // esi
  _DWORD *v12; // rbx
  _DWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  int *v16; // r13
  int *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rdi
  unsigned int v21; // ebx
  _QWORD *v23; // r12
  __int64 v24; // rdx
  int *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  char v28; // al
  __int64 v29; // [rsp+0h] [rbp-C8h]
  int *dest; // [rsp+28h] [rbp-A0h]
  __int64 v35[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v36; // [rsp+40h] [rbp-88h] BYREF
  __int128 v37; // [rsp+48h] [rbp-80h]
  __int64 v38[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v39; // [rsp+70h] [rbp-58h] BYREF
  __int128 v40; // [rsp+78h] [rbp-50h]
  unsigned __int64 v41; // [rsp+88h] [rbp-40h]

  v8 = *(_QWORD *)a4;
  v41 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(v8 + 432) + 104LL * a4[2];
  v29 = v9;
  tinfo_size = get_tinfo_size();
  if ( (*(_BYTE *)(v9 + 25) & 1) != 0 )
  {
    v11 = tinfo_size;
    if ( *(_DWORD *)(v9 + 88) != tinfo_size )
    {
      if ( *(_DWORD *)(v9 + 88) > tinfo_size )
        return 0;
      v12 = *(_DWORD **)(*(_QWORD *)a4 + 456LL);
      v13 = &v12[*(_QWORD *)(*(_QWORD *)a4 + 464LL)];
      if ( v12 == v13 )
        goto LABEL_41;
      while ( a4[2] != *v12 )
      {
        if ( v13 == ++v12 )
          goto LABEL_41;
      }
      if ( v13 == v12 )
      {
LABEL_41:
        if ( !under_debugger )
          sub_383060(52033);
        BUG();
      }
      v14 = *(_QWORD *)(*(_QWORD *)a4 + 1440LL);
      v35[0] = 0;
      v35[1] = 0;
      v36 = 0;
      v37 = 0;
      sub_1C31B0(v29, (__int64)v35, v11, v14, 0);
      v15 = *(_QWORD *)a4;
      dest = v12 + 1;
      v16 = (int *)(*(_QWORD *)(*(_QWORD *)a4 + 456LL) + 4LL * *(_QWORD *)(*(_QWORD *)a4 + 464LL));
      if ( v12 + 1 == v16 )
      {
LABEL_28:
        v21 = sub_278EB0(a1, a2, a3, v29, a5, a6);
        if ( (_BYTE)v21 )
        {
          v23 = *(_QWORD **)a4;
          v24 = *(_QWORD *)(*(_QWORD *)a4 + 456LL) + 4LL * *(_QWORD *)(*(_QWORD *)a4 + 464LL);
          if ( dest != (int *)v24 )
          {
            if ( dest != v16 )
            {
              v25 = dest;
              do
              {
                v26 = *v25++;
                v27 = v23[54] + 104 * v26;
                LODWORD(v26) = *(_DWORD *)(v27 + 24);
                BYTE1(v26) &= 0x7Eu;
                *(_DWORD *)(v27 + 24) = v26 | 0x100000;
                v23 = *(_QWORD **)a4;
              }
              while ( v25 != v16 );
              v24 = v23[57] + 4LL * v23[58];
            }
            memmove(dest, v16, v24 - (_QWORD)v16);
            v23[58] -= v16 - dest;
          }
          goto LABEL_19;
        }
      }
      else
      {
        v17 = v12 + 1;
        while ( 1 )
        {
          v18 = *v17;
          v38[0] = 0;
          v38[1] = 0;
          v40 = 0;
          v39 = 0;
          v19 = *(_QWORD *)(v15 + 432) + 104 * v18;
          sub_1C3380(v19, v15, (__int64)v38, 0);
          if ( !(unsigned __int8)sub_64780(v38, v35) && !(unsigned __int8)sub_318470(&v39, &v36) )
          {
            if ( v39 )
            {
              *(_QWORD *)&v40 = 0;
              qfree(v39);
            }
            v16 = v17;
            qfree(v38[0]);
            goto LABEL_28;
          }
          if ( (*(_BYTE *)(v19 + 26) & 8) == 0 || !(unsigned __int8)sub_64820(v38, v35) )
            break;
          v28 = sub_317F40(&v36, &v39);
          v20 = v39;
          if ( !v28 )
            goto LABEL_15;
          if ( v39 )
          {
            *(_QWORD *)&v40 = 0;
            qfree(v39);
          }
          ++v17;
          qfree(v38[0]);
          v15 = *(_QWORD *)a4;
          v16 = (int *)(*(_QWORD *)(*(_QWORD *)a4 + 456LL) + 4LL * *(_QWORD *)(*(_QWORD *)a4 + 464LL));
          if ( v17 == v16 )
            goto LABEL_28;
        }
        v20 = v39;
LABEL_15:
        if ( v20 )
        {
          *(_QWORD *)&v40 = 0;
          qfree(v20);
        }
        qfree(v38[0]);
      }
      v21 = 0;
LABEL_19:
      if ( v36 )
      {
        *(_QWORD *)&v37 = 0;
        qfree(v36);
      }
      qfree(v35[0]);
      return v21;
    }
  }
  return sub_278EB0(a1, a2, a3, v9, a5, a6);
}
