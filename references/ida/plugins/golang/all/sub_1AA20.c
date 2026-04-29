__int64 __fastcall sub_1AA20(__int64 *a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int v6; // r14d
  __int64 v7; // r13
  __int64 i; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  int v11; // ebx
  __int64 v12; // r12
  __int64 v13; // rbp
  _QWORD *v14; // rbx
  unsigned int v16; // eax
  __int64 tinfo_property; // [rsp+28h] [rbp-80h] BYREF
  __int64 idati; // [rsp+30h] [rbp-78h] BYREF
  __int128 v21; // [rsp+38h] [rbp-70h]
  __int128 v22; // [rsp+48h] [rbp-60h]
  __int64 v23; // [rsp+58h] [rbp-50h]
  int v24; // [rsp+60h] [rbp-48h]
  unsigned __int64 v25; // [rsp+68h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  WORD4(v21) = 257;
  *(_QWORD *)&v21 = a3;
  idati = get_idati();
  create_tinfo();
  idati = 0;
  v23 = 0;
  v24 = 1;
  v21 = 0;
  v22 = 0;
  get_tinfo_details();
  v4 = sub_A7B0(a1, a2, &idati);
  v5 = idati;
  v6 = v4;
  if ( !(_BYTE)v4 )
  {
    v7 = idati + 144 * v21;
    if ( idati != v7 )
    {
      for ( i = idati + 64; ; i = v9 )
      {
        v10 = a2 + (*(_QWORD *)(i - 64) >> 3);
        if ( (get_tinfo_property() & 0xF) == 0xA )
        {
          tinfo_property = 0;
          copy_tinfo_t();
          v11 = sub_1A620(a1, v10, (__int64)&tinfo_property, a4);
          clear_tinfo_t();
          v6 |= v11;
          v9 = i + 144;
          if ( v7 == i + 80 )
            goto LABEL_11;
        }
        else
        {
          if ( (get_tinfo_property() & 0xF) == 0xB )
          {
            tinfo_property = 0;
            tinfo_property = get_tinfo_property();
            copy_tinfo_t();
            clear_tinfo_t();
          }
          if ( (get_tinfo_property() & 0x3F) == 0xD )
          {
            v16 = get_tinfo_property();
            if ( v16 )
              v6 |= sub_1AD20(a1, v10, *(_QWORD *)(i - 56) >> 3, v16, a4);
          }
          v9 = i + 144;
          if ( v7 == i + 80 )
          {
LABEL_11:
            v5 = idati;
            break;
          }
        }
      }
    }
  }
  if ( v5 )
  {
    v12 = v21;
    if ( (_QWORD)v21 )
    {
      v13 = 0;
      do
      {
        v14 = (_QWORD *)(v5 + 144 * v13);
        clear_tinfo_t();
        if ( v14[5] )
        {
          v14[6] = 0;
          qfree();
        }
        if ( v14[2] )
        {
          v14[3] = 0;
          qfree();
        }
        ++v13;
        v5 = idati;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  clear_tinfo_t();
  return v6;
}
