__int64 __fastcall sub_5B70E0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
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
  __int64 tinfo_size; // rax
  unsigned __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v25; // rax
  unsigned __int8 v26; // al
  __int64 v27; // [rsp+0h] [rbp-78h]
  const char *v28; // [rsp+8h] [rbp-70h]
  __int64 v29; // [rsp+10h] [rbp-68h] BYREF
  __int64 v30; // [rsp+18h] [rbp-60h] BYREF
  __int64 v31; // [rsp+20h] [rbp-58h] BYREF
  int v32; // [rsp+28h] [rbp-50h]
  int v33; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v34; // [rsp+38h] [rbp-40h]

  v34 = __readfsqword(0x28u);
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
        *(_DWORD *)(a2 + 132) |= a5;
        *(_QWORD *)a2 = 8 * a3;
        v29 = 0;
        get_stock_tinfo(&v29, 30);
        tinfo_size = get_tinfo_size(0, v29, 0);
        v21 = tinfo_size;
        if ( a5 == 4096 )
        {
          if ( a4 != tinfo_size )
            clear_tinfo_t(&v29);
        }
        else
        {
          clear_tinfo_t(&v29);
          if ( !(a4 % v21) )
          {
            v26 = sub_6AA500(a1, (unsigned int)v21);
            if ( v26 )
            {
              v31 = v26;
              copy_tinfo_t(&v29);
              clear_tinfo_t(&v31);
              if ( a4 / v21 != 1 )
              {
                v32 = 0;
                v31 = 0;
                v33 = a4 / v21;
                copy_tinfo_t(&v31);
                create_tinfo(&v29, 11, 11, &v31);
                clear_tinfo_t(&v31);
              }
            }
          }
        }
        v22 = v29;
        if ( (_BYTE)v29 )
        {
          v23 = *(_QWORD *)(a2 + 64);
          *(_QWORD *)(a2 + 64) = v29;
          v29 = v23;
        }
        else
        {
          v32 = 0;
          v33 = a4;
          v30 = 17;
          v31 = 0;
          copy_tinfo_t(&v31);
          create_tinfo(a2 + 64, 11, 11, &v31);
          clear_tinfo_t(&v31);
          clear_tinfo_t(&v30);
          v22 = *(_QWORD *)(a2 + 64);
        }
        *(_QWORD *)(a2 + 8) = 8 * get_tinfo_size(0, v22, 0);
        clear_tinfo_t(&v29);
        return 0;
      }
    }
    v28 = v11;
    v27 = v9;
    v25 = qvector_reserve(a2 + 16, v12, v9, 1);
    v11 = v28;
    v9 = v27;
    *(_QWORD *)(a2 + 16) = v25;
    v12 = (_QWORD *)v25;
    goto LABEL_5;
  }
  return 4294967292LL;
}
