__int64 __fastcall sub_409FE0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, unsigned __int8 *a6)
{
  unsigned __int64 v9; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v15; // al
  int v16; // eax
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // rbp
  int v30; // eax
  __int64 v31; // [rsp+8h] [rbp-60h] BYREF
  char v32[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]

  v9 = *(_QWORD *)(a4 + 24);
  v33 = __readfsqword(0x28u);
  sub_330F80(a3, v9);
  v11 = getseg();
  if ( !v11 )
    return 0;
  v12 = (unsigned int)*(unsigned __int8 *)(v11 + 43) + 4;
  v13 = (unsigned int)(1 << (*(_BYTE *)(v11 + 43) + 4));
  if ( *((_DWORD *)a6 + 1) != (int)v13 / 8 )
    return 0;
  if ( a5 )
  {
    v15 = *(_BYTE *)a5;
    if ( (unsigned __int8)(*(_BYTE *)a5 - 1) <= 1u )
    {
      v31 = 0;
      v13 = *a6;
      switch ( *a6 )
      {
        case 1u:
          if ( v15 != 1 )
            return 0;
          v22 = *(_DWORD *)(a5 + 8);
          if ( (*(_DWORD *)(a1 + 84) != 8 || v22 == *(_DWORD *)(a1 + 484) || v22 == *(_DWORD *)(a1 + 488))
            && v22 != *(_DWORD *)(a1 + 56) )
          {
            return 0;
          }
          v23 = a1;
          if ( !(unsigned __int8)sub_3393B0((unsigned __int64 *)&v31, a1, a3, v9, *((_DWORD *)a6 + 2)) )
            return 0;
          goto LABEL_31;
        case 2u:
          if ( *(_BYTE *)a5 != 2 )
          {
            v30 = sub_409F30((unsigned int *)a1, a5);
            if ( v30 == -1 || (*(_DWORD *)(a1 + 84) != 8 || (unsigned int)(v30 - 33) <= 1) && get_sreg() == -1 )
              return 0;
          }
          get_group_selector();
          v18 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)a6 + 1) + 16LL), *((_DWORD *)a6 + 1), 0);
          v19 = v18 + 16 * sel2para();
          v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 16LL);
          if ( v19 != v20 )
          {
            v20 &= v19;
            if ( v19 == -1 )
              v20 = -1;
          }
          sub_11CDA0(a2);
          *(_BYTE *)a2 = 6;
          v21 = 8 * *(_DWORD *)(a1 + 84);
          if ( (unsigned __int64)v21 <= 0x3F )
            v20 &= ~(-1LL << v21);
          *(_QWORD *)(a2 + 8) = v20;
          return 1;
        case 4u:
          if ( v15 != 1 )
            return 0;
          v28 = *(_DWORD *)(a5 + 8);
          if ( (*(_DWORD *)(a1 + 84) != 8 || v28 == *(_DWORD *)(a1 + 484) || v28 == *(_DWORD *)(a1 + 488))
            && v28 != *(_DWORD *)(a1 + 56) )
          {
            return 0;
          }
          v29 = *((_QWORD *)a6 + 1);
          v23 = a1;
          if ( !(unsigned __int8)sub_339470(&v31, a1, a3, v9, (int *)v29)
            || *(_DWORD *)v29 == 13 && (*(_BYTE *)(v29 + 32) != 1 || *(_DWORD *)(a1 + 400) != *(_DWORD *)(v29 + 40)) )
          {
            return 0;
          }
LABEL_31:
          v24 = v31;
          if ( v31 < 0 )
            return 0;
          sub_11CDA0(a2);
          *(_BYTE *)a2 = 5;
          v27 = (_QWORD *)j__qalloc_or_throw(16, v23, v25, v26);
          *v27 = a3;
          v27[1] = v24;
          *(_QWORD *)(a2 + 8) = v27;
          break;
        case 6u:
          goto LABEL_7;
        case 0xAu:
          if ( v15 == 1 )
          {
            v17 = *(_DWORD *)(a5 + 8);
            if ( *(_DWORD *)(a1 + 484) == v17 || *(_DWORD *)(a1 + 488) == v17 )
              return 0;
          }
          goto LABEL_15;
        default:
          return 0;
      }
      return 1;
    }
    return 0;
  }
  v31 = 0;
  if ( *a6 == 6 )
  {
LABEL_7:
    v16 = *(_DWORD *)(a3[187] + 152LL);
    if ( v16 != 11 && v16 != 4 || (a6[1] & 1) != 0 || (unsigned __int8)segtype() != 1 )
      return 0;
    sub_125180(a2, a6);
    *(_BYTE *)(a2 + 1) |= 1u;
  }
  else
  {
    if ( *a6 != 10 )
      return 0;
LABEL_15:
    sub_123A40((__int64)v32, *((unsigned __int8 **)a6 + 1), v13, v12);
    sub_11CA10((char *)a2, v32);
    sub_11CDA0((__int64)v32);
  }
  return 1;
}
