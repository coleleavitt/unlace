__int64 __fastcall sub_59CF30(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // r15
  const char *v11; // r8
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rax
  char *v14; // rsi
  const char *v15; // r8
  unsigned int v16; // esi
  unsigned int v17; // esi
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned __int64 tinfo_size; // r14
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v24; // rax
  unsigned __int8 v25; // al
  __int64 v26; // [rsp+0h] [rbp-78h]
  const char *v27; // [rsp+8h] [rbp-70h]
  __int64 v28; // [rsp+10h] [rbp-68h] BYREF
  __int64 v29; // [rsp+18h] [rbp-60h] BYREF
  __int64 v30; // [rsp+20h] [rbp-58h] BYREF
  int v31; // [rsp+28h] [rbp-50h]
  int v32; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( ((a5 - 4096) & 0xFFFFFFFFFFFFEFFFLL) == 0 )
  {
    if ( !a4 )
      return 0;
    v9 = 18;
    v10 = 17;
    v11 = "__saved_registers";
    if ( a5 == 4096 )
    {
      v12 = *(_QWORD **)(a2 + 16);
      v9 = 17;
      v10 = 16;
      v11 = "__return_address";
      if ( *(_QWORD *)(a2 + 32) >= 0x11u )
        goto LABEL_5;
    }
    else
    {
      v12 = *(_QWORD **)(a2 + 16);
      if ( *(_QWORD *)(a2 + 32) >= 0x12u )
      {
LABEL_5:
        *(_QWORD *)(a2 + 24) = v9;
        *v12 = *(_QWORD *)v11;
        *(_QWORD *)((char *)v12 + v10 - 8) = *(_QWORD *)&v11[v10 - 8];
        v13 = (unsigned __int64)(v12 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v14 = (char *)v12 - v13;
        v15 = (const char *)(v11 - v14);
        v16 = (v10 + (_DWORD)v14) & 0xFFFFFFF8;
        if ( v16 >= 8 )
        {
          v17 = v16 & 0xFFFFFFF8;
          v18 = 0;
          do
          {
            v19 = v18;
            v18 += 8;
            *(_QWORD *)(v13 + v19) = *(_QWORD *)&v15[v19];
          }
          while ( v18 < v17 );
        }
        *(_BYTE *)(*(_QWORD *)(a2 + 16) + v10) = 0;
        *(_DWORD *)(a2 + 116) |= a5;
        *(_QWORD *)a2 = 8LL * a3;
        v28 = 0;
        get_stock_tinfo(&v28, 30);
        tinfo_size = get_tinfo_size(0, v28, 0);
        if ( a5 == 4096 )
        {
          if ( a4 != tinfo_size )
            clear_tinfo_t(&v28);
        }
        else
        {
          clear_tinfo_t(&v28);
          if ( !(a4 % tinfo_size) )
          {
            v25 = sub_689D10(a1, (unsigned int)tinfo_size);
            if ( v25 )
            {
              v30 = v25;
              copy_tinfo_t(&v28);
              clear_tinfo_t(&v30);
              if ( a4 / tinfo_size != 1 )
              {
                v31 = 0;
                v30 = 0;
                v32 = a4 / tinfo_size;
                copy_tinfo_t(&v30);
                create_tinfo(&v28, 11, 11, &v30);
                clear_tinfo_t(&v30);
              }
            }
          }
        }
        v21 = v28;
        if ( (_BYTE)v28 )
        {
          v22 = *(_QWORD *)(a2 + 64);
          *(_QWORD *)(a2 + 64) = v28;
          v28 = v22;
        }
        else
        {
          v31 = 0;
          v32 = a4;
          v29 = 17;
          v30 = 0;
          copy_tinfo_t(&v30);
          create_tinfo(a2 + 64, 11, 11, &v30);
          clear_tinfo_t(&v30);
          clear_tinfo_t(&v29);
          v21 = *(_QWORD *)(a2 + 64);
        }
        *(_QWORD *)(a2 + 8) = 8 * get_tinfo_size(0, v21, 0);
        clear_tinfo_t(&v28);
        return 0;
      }
    }
    v27 = v11;
    v26 = v9;
    v24 = qvector_reserve(a2 + 16, v12, v9, 1);
    v11 = v27;
    v9 = v26;
    *(_QWORD *)(a2 + 16) = v24;
    v12 = (_QWORD *)v24;
    goto LABEL_5;
  }
  return 4294967292LL;
}

