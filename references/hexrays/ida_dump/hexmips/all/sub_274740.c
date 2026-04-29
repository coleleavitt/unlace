__int64 __fastcall sub_274740(__int64 a1, __int64 a2, __int64 *a3, int *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rbx
  signed int tinfo_size; // eax
  unsigned int v12; // esi
  _DWORD *v13; // rbx
  _DWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  int *v17; // r13
  int *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rdi
  unsigned int v22; // ebx
  _QWORD *v24; // r12
  __int64 v25; // rdx
  int *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  char v29; // al
  __int64 v30; // [rsp+0h] [rbp-C8h]
  int *dest; // [rsp+28h] [rbp-A0h]
  __int64 v36[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v37; // [rsp+40h] [rbp-88h] BYREF
  __int128 v38; // [rsp+48h] [rbp-80h]
  __int64 v39[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v40; // [rsp+70h] [rbp-58h] BYREF
  __int128 v41; // [rsp+78h] [rbp-50h]
  unsigned __int64 v42; // [rsp+88h] [rbp-40h]

  v8 = *(_QWORD *)a4;
  v9 = *a3;
  v42 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(v8 + 432) + 104LL * a4[2];
  v30 = v10;
  tinfo_size = get_tinfo_size(0, v9, 0);
  if ( (*(_BYTE *)(v10 + 25) & 1) != 0 )
  {
    v12 = tinfo_size;
    if ( *(_DWORD *)(v10 + 88) != tinfo_size )
    {
      if ( *(_DWORD *)(v10 + 88) > tinfo_size )
        return 0;
      v13 = *(_DWORD **)(*(_QWORD *)a4 + 456LL);
      v14 = &v13[*(_QWORD *)(*(_QWORD *)a4 + 464LL)];
      if ( v13 == v14 )
        goto LABEL_41;
      while ( a4[2] != *v13 )
      {
        if ( v14 == ++v13 )
          goto LABEL_41;
      }
      if ( v14 == v13 )
      {
LABEL_41:
        if ( !under_debugger )
          sub_37E160(52033);
        BUG();
      }
      v15 = *(_QWORD *)(*(_QWORD *)a4 + 1440LL);
      v36[0] = 0;
      v36[1] = 0;
      v37 = 0;
      v38 = 0;
      sub_1BEDF0(v30, v36, v12, v15, nullptr);
      v16 = *(_QWORD *)a4;
      dest = v13 + 1;
      v17 = (int *)(*(_QWORD *)(*(_QWORD *)a4 + 456LL) + 4LL * *(_QWORD *)(*(_QWORD *)a4 + 464LL));
      if ( v13 + 1 == v17 )
      {
LABEL_28:
        v22 = sub_274630(a1, a2, a3, v30, a5, a6);
        if ( (_BYTE)v22 )
        {
          v24 = *(_QWORD **)a4;
          v25 = *(_QWORD *)(*(_QWORD *)a4 + 456LL) + 4LL * *(_QWORD *)(*(_QWORD *)a4 + 464LL);
          if ( dest != (int *)v25 )
          {
            if ( dest != v17 )
            {
              v26 = dest;
              do
              {
                v27 = *v26++;
                v28 = v24[54] + 104 * v27;
                LODWORD(v27) = *(_DWORD *)(v28 + 24);
                BYTE1(v27) &= 0x7Eu;
                *(_DWORD *)(v28 + 24) = v27 | 0x100000;
                v24 = *(_QWORD **)a4;
              }
              while ( v26 != v17 );
              v25 = v24[57] + 4LL * v24[58];
            }
            memmove(dest, v17, v25 - (_QWORD)v17);
            v24[58] -= v17 - dest;
          }
          goto LABEL_19;
        }
      }
      else
      {
        v18 = v13 + 1;
        while ( 1 )
        {
          v19 = *v18;
          v39[0] = 0;
          v39[1] = 0;
          v41 = 0;
          v40 = 0;
          v20 = *(_QWORD *)(v16 + 432) + 104 * v19;
          sub_1BEFC0(v20, v16, v39, 0);
          if ( !(unsigned __int8)sub_60580(v39, v36) && !(unsigned __int8)sub_3136F0(&v40, &v37) )
          {
            if ( v40 )
            {
              *(_QWORD *)&v41 = 0;
              qfree(v40);
            }
            v17 = v18;
            qfree(v39[0]);
            goto LABEL_28;
          }
          if ( (*(_BYTE *)(v20 + 26) & 8) == 0 || !(unsigned __int8)sub_60620(v39, v36) )
            break;
          v29 = sub_3131C0(&v37, &v40);
          v21 = v40;
          if ( !v29 )
            goto LABEL_15;
          if ( v40 )
          {
            *(_QWORD *)&v41 = 0;
            qfree(v40);
          }
          ++v18;
          qfree(v39[0]);
          v16 = *(_QWORD *)a4;
          v17 = (int *)(*(_QWORD *)(*(_QWORD *)a4 + 456LL) + 4LL * *(_QWORD *)(*(_QWORD *)a4 + 464LL));
          if ( v18 == v17 )
            goto LABEL_28;
        }
        v21 = v40;
LABEL_15:
        if ( v21 )
        {
          *(_QWORD *)&v41 = 0;
          qfree(v21);
        }
        qfree(v39[0]);
      }
      v22 = 0;
LABEL_19:
      if ( v37 )
      {
        *(_QWORD *)&v38 = 0;
        qfree(v37);
      }
      qfree(v36[0]);
      return v22;
    }
  }
  return sub_274630(a1, a2, a3, v10, a5, a6);
}
