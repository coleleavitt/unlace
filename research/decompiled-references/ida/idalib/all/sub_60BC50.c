__int64 __fastcall sub_60BC50(__int64 a1, __int64 *a2, int a3, char a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r13d
  unsigned int v9; // edx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  __int16 v16; // ax
  __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  __int64 v29; // [rsp+0h] [rbp-60h] BYREF
  __int64 v30; // [rsp+8h] [rbp-58h] BYREF
  __int16 v31; // [rsp+10h] [rbp-50h]
  char v32; // [rsp+12h] [rbp-4Eh]
  void *ptr; // [rsp+20h] [rbp-40h] BYREF
  __int128 v34; // [rsp+28h] [rbp-38h]
  unsigned __int64 v35; // [rsp+38h] [rbp-28h]

  v35 = __readfsqword(0x28u);
  if ( (a3 & 0x600) != 0x400 )
    return 0;
  v9 = a3 & 0xF0000000;
  switch ( v9 )
  {
    case 0u:
      v10 = 1;
      goto LABEL_6;
    case 0x10000000u:
      v10 = 2;
      goto LABEL_6;
    case 0x20000000u:
      v10 = 4;
      goto LABEL_6;
    case 0x30000000u:
      v10 = 8;
LABEL_6:
      if ( a4 )
        v11 = (unsigned __int8)sub_6AA500(a1, v10);
      else
        v11 = (unsigned __int8)sub_6AA3E0(a1, v10);
      goto LABEL_23;
    case 0x70000000u:
      v10 = 16;
      goto LABEL_6;
    case 0xE0000000:
      v16 = 32;
      break;
    case 0xF0000000:
      v16 = 64;
      break;
    default:
      switch ( v9 )
      {
        case 0x40000000u:
          goto LABEL_18;
        case 0x80000000:
          v23 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 20LL);
          v24 = v23 + 14;
          v25 = v23 + 7;
          if ( v25 >= 0 )
            v24 = v25;
          if ( !(4 / (v24 >> 3)) )
            return 0;
          v11 = 9;
          goto LABEL_23;
        case 0x90000000:
          v26 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 20LL);
          v27 = v26 + 14;
          v28 = v26 + 7;
          if ( v28 >= 0 )
            v27 = v28;
          if ( !(8 / (v27 >> 3)) )
            return 0;
          v11 = 25;
          goto LABEL_23;
        case 0xA0000000:
LABEL_18:
          v12 = *(_QWORD *)(a1 + 16);
          v13 = *(_QWORD *)(v12 + 120);
          v14 = (int)v13;
          if ( (_DWORD)v13 )
          {
            if ( (unsigned __int8)getinf(66) )
              v15 = (unsigned __int8)getinf(66);
            else
              v15 = *(_QWORD *)(v12 + 120);
            if ( v14 == v15 )
            {
              v11 = 41;
              goto LABEL_23;
            }
            v11 = 57;
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 11LL) & 8) != 0 )
            {
LABEL_23:
              ptr = (void *)v11;
              copy_tinfo_t(a2);
              v6 = 1;
              clear_tinfo_t(&ptr);
              return v6;
            }
          }
          break;
      }
      return 0;
  }
  v31 = v16;
  v29 = 0;
  v30 = 0;
  v32 = 48;
  ptr = nullptr;
  v34 = 0;
  v17 = sub_3792E0(0x7D5u, &ptr, &v29, 0, 1, a5, a6);
  v18 = ptr;
  v6 = 0;
  if ( v17 > 0 )
  {
    v19 = *a2;
    v6 = 1;
    *a2 = *((_QWORD *)ptr + 1);
    v18[1] = v19;
  }
  if ( v18 )
  {
    v20 = v34;
    if ( (_QWORD)v34 )
    {
      v21 = 0;
      do
      {
        v22 = 3 * v21++;
        clear_tinfo_t(&v18[v22 + 1]);
        v18 = ptr;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v34 = 0;
    qfree(v18);
  }
  clear_tinfo_t(&v30);
  return v6;
}
