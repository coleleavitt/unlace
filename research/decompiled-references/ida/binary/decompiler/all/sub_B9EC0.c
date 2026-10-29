__int64 __fastcall sub_B9EC0(__int64 a1, __int64 a2)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r13
  _DWORD *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r14
  _QWORD *v21; // rax
  __int64 v22; // rsi
  _DWORD *v23; // rdx
  __int64 v24; // rdx
  int v25; // eax
  bool v26; // zf
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v30[11]; // [rsp+20h] [rbp-58h] BYREF

  v30[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 14 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 800LL);
    v7 = (_QWORD *)sub_1F8D90(v6, v5);
    v11 = v7;
    if ( v7 )
    {
      v12 = *v7;
      v13 = *((int *)v11 + 4);
      if ( *(_QWORD *)(v12 + 440) < v13 )
        sub_B6D80(v6, v5, v8, v9, v10);
      v14 = *(_QWORD *)(v12 + 432);
      v15 = sub_1F8D90(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 800LL), *(_QWORD *)(a2 + 8) + 16LL);
      v16 = v15;
      if ( v15 )
      {
        if ( *((_DWORD *)v11 + 4) == *(_DWORD *)(v15 + 16) )
        {
          v17 = (_DWORD *)(v14 + 104 * v13);
          if ( v17[22] >= *(_DWORD *)(a2 + 4) )
          {
            v18 = *(_QWORD *)(a1 + 8);
            v19 = *(_QWORD *)(v18 + 1496);
            v20 = *(_QWORD *)(v18 + 1504);
            if ( *(_BYTE *)(v19 + 145)
              && ((unsigned int)(*v17 - 3) > 1 || (unsigned __int8)sub_11A810(*(_QWORD *)(a2 + 8), v19, 0)) )
            {
              v21 = v11;
              v11 = (_QWORD *)v16;
              v16 = (__int64)v21;
            }
            v22 = *(_QWORD *)(a2 + 8);
            if ( *(_QWORD *)(v16 + 8) == v11[1] + *(int *)(v22 + 4) )
            {
              v30[1] = 0;
              v30[0] = 0xFFFFFFFF00000000LL;
              if ( *v17 == 2 )
              {
                v29 = 0;
                copy_tinfo_t();
                sub_11AD10(v30, *(_QWORD *)(a1 + 8), &unk_419691, &v29, v17);
                clear_tinfo_t();
                if ( !(unsigned __int8)sub_124480(v30, *((unsigned int *)v11 + 2), *(unsigned int *)(a2 + 4), 0) )
                {
LABEL_20:
                  sub_11A960(v30);
                  return 0;
                }
                v24 = *(_QWORD *)(a1 + 16);
                v25 = *(_DWORD *)(v24 + 24);
                BYTE1(v25) &= ~2u;
                LOBYTE(v25) = v25 | 0x80;
                v26 = LOBYTE(v30[0]) == 15;
                *(_DWORD *)(v24 + 24) = v25;
                if ( !v26 || (get_tinfo_property() & 0x2F) != 0xD )
                {
LABEL_18:
                  sub_11A5D0(a2, v30);
                  v23 = *(_DWORD **)(a1 + 32);
                  ++*(_DWORD *)(a1 + 44);
                  if ( (unsigned int)(*v23 - 8) <= 1 && (unsigned __int8)sub_124F10(v23 + 8, v20, v23 + 16) )
                  {
                    v27 = *(_QWORD *)(a1 + 16);
                    v28 = *(_DWORD *)(v27 + 24);
                    BYTE1(v28) &= ~2u;
                    LOBYTE(v28) = v28 | 0x80;
                    *(_DWORD *)(v27 + 24) = v28;
                  }
                  *(_BYTE *)(a1 + 40) = 1;
                  goto LABEL_20;
                }
              }
              else
              {
                if ( (*v17 & 0xFFFFFFFD) != 1 )
                  goto LABEL_20;
                if ( *(_BYTE *)v22 != *(_BYTE *)(v22 + 16) )
                {
                  if ( !under_debugger )
                    sub_37EA20(51914);
                  BUG();
                }
                sub_122C80(v30);
                if ( !(unsigned __int8)sub_12F310(v30, v20, 128) )
                  goto LABEL_20;
                if ( (*(_BYTE *)(a2 + 1) & 2) == 0 )
                  goto LABEL_18;
              }
              BYTE1(v30[0]) |= 2u;
              goto LABEL_18;
            }
          }
        }
      }
    }
  }
  return 0;
}
