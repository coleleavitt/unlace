void __fastcall sub_7BB880(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  __int64 *v4; // r8
  __int64 *v5; // rbp
  __int64 *v8; // r15
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int *v12; // r14
  bool v13; // al
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int *v21; // rdi
  __int64 v22; // r11
  unsigned int v23; // r10d
  unsigned int *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  _QWORD v30[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = *(__int64 **)(*(_QWORD *)(a1 + 936) + 8LL * a3);
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 != v5 )
    {
      v8 = *(__int64 **)(*(_QWORD *)(a1 + 936) + 8LL * a3);
      v9 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = *v8;
          if ( !*(_DWORD *)(*v8 + 8) && a2 != v10 && !*(_BYTE *)(v10 + 12) )
          {
            v11 = sub_828140(v10);
            v12 = (unsigned int *)v11;
            if ( *(_DWORD *)(v11 + 16) == -2 )
            {
              v30[0] = v9;
              v13 = sub_7BB700(a1, a2, v11, v30);
              v9 = v30[0];
              if ( v13 )
                break;
            }
          }
LABEL_20:
          if ( v5 == ++v8 )
            goto LABEL_21;
        }
        if ( v30[0] && *(_DWORD *)(v30[0] - 4LL) )
        {
          if ( (unsigned int)sub_180B130(a1) > 0xA )
          {
            if ( (unsigned __int8)sub_186A530(a4) )
            {
              sub_186A4C0(a4);
              v14 = sub_180B150(a1, a2);
              std::operator<<<std::char_traits<char>>();
              v15 = sub_180B150(v14, "self-subsume cardinality\n");
              v16 = sub_7E42B0(v15, a2);
              std::operator<<<std::char_traits<char>>();
              v17 = sub_180B150(v16, "\n");
              v18 = sub_7E42B0(v17, v12);
              std::operator<<<std::char_traits<char>>();
              sub_186A500(v18, "\n");
            }
            else
            {
              v26 = sub_180B150(a1, a2);
              std::operator<<<std::char_traits<char>>();
              v27 = sub_180B150(v26, "self-subsume cardinality\n");
              v28 = sub_7E42B0(v27, a2);
              std::operator<<<std::char_traits<char>>();
              v29 = sub_180B150(v28, "\n");
              sub_7E42B0(v29, v12);
              std::operator<<<std::char_traits<char>>();
            }
          }
          (*(void (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)v12 + 16LL))(v12, a1 + 80);
          v19 = v12[8];
          if ( (_DWORD)v19 )
          {
            v20 = *(_QWORD *)(a1 + 24);
            v21 = &v12[v19];
            LODWORD(v19) = 0;
            v22 = *(_QWORD *)(v20 + 3840);
            v23 = *(_DWORD *)(v20 + 3848);
            v24 = v12;
            do
            {
              if ( v23 >= *(_DWORD *)(v22 + 4LL * (v24[16] ^ 1)) )
              {
                v25 = (unsigned int)v19;
                LODWORD(v19) = v19 + 1;
                v12[v25 + 16] = v24[16];
              }
              ++v24;
            }
            while ( v24 != v21 );
          }
          v12[8] = v19;
          sub_7AFDF0((_QWORD *)a1, (__int64)v12);
          *(_BYTE *)(a1 + 952) = 1;
          goto LABEL_20;
        }
        sub_7AFFA0(a1, v12, "subsumed", a4);
        ++*(_DWORD *)(a1 + 196);
        sub_7B33B0(a1, a2);
        if ( v5 == ++v8 )
        {
LABEL_21:
          if ( v9 )
            sub_186B220((void *)(v9 - 8));
          return;
        }
      }
    }
  }
}

