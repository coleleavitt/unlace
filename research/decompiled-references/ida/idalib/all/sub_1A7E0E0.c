__int64 __fastcall sub_1A7E0E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // r13
  size_t v8; // rsi
  unsigned int *v9; // rax
  size_t v10; // r8
  _BYTE *v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rdx
  _BYTE *v15; // rdi
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rdx
  __int64 v18; // rax

  v3 = a1 + 16;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  if ( a3 )
  {
    v5 = 16 * a3;
    v6 = a2 + v5;
    if ( a2 != a2 + v5 )
    {
      v7 = a2 + 16;
      v8 = 0;
      while ( 1 )
      {
        if ( v8 )
        {
          if ( v8 == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_21;
          v16 = v8 + 1;
          v17 = v3 == *(_QWORD *)a1 ? 15LL : *(_QWORD *)(a1 + 16);
          if ( v16 > v17 )
            sub_998B30(a1, v8, 0, ".", 1u);
          else
            *(_BYTE *)(*(_QWORD *)a1 + v8) = 46;
          v18 = *(_QWORD *)a1;
          *(_QWORD *)(a1 + 8) = v16;
          *(_BYTE *)(v18 + v16) = 0;
          v8 = *(_QWORD *)(a1 + 8);
          v9 = *(unsigned int **)(*(_QWORD *)(v7 - 8) + 16LL);
          v10 = *v9;
          v11 = v9 + 4;
          if ( v10 > 0x7FFFFFFFFFFFFFFFLL - v8 )
LABEL_21:
            std::__throw_length_error("basic_string::append");
        }
        else
        {
          v9 = *(unsigned int **)(*(_QWORD *)(v7 - 8) + 16LL);
          v10 = *v9;
          v11 = v9 + 4;
        }
        v12 = *(_QWORD *)a1;
        v13 = v10 + v8;
        v14 = v3 == *(_QWORD *)a1 ? 15LL : *(_QWORD *)(a1 + 16);
        if ( v13 > v14 )
        {
          sub_998B30(a1, v8, 0, v11, v10);
          v12 = *(_QWORD *)a1;
        }
        else if ( v10 )
        {
          v15 = (_BYTE *)(v8 + v12);
          if ( v10 == 1 )
            *v15 = *((_BYTE *)v9 + 16);
          else
            memcpy(v15, v11, v10);
          v12 = *(_QWORD *)a1;
        }
        *(_QWORD *)(a1 + 8) = v13;
        *(_BYTE *)(v12 + v13) = 0;
        if ( v6 == v7 )
          break;
        v8 = *(_QWORD *)(a1 + 8);
        v7 += 16;
      }
    }
  }
  return a1;
}
