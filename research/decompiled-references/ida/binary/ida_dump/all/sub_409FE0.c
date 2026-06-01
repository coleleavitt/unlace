__int64 __fastcall sub_409FE0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // r14
  __int64 v10; // rax
  char v12; // al
  int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rbp
  _QWORD *v21; // rax
  int v22; // eax
  __int64 v23; // rbp
  int v24; // eax
  __int64 v25; // [rsp+8h] [rbp-60h] BYREF
  char v26[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v8 = *(_QWORD *)(a4 + 24);
  v27 = __readfsqword(0x28u);
  sub_330F80(a3, v8);
  v10 = getseg();
  if ( !v10 || *(_DWORD *)(a6 + 4) != (1 << (*(_BYTE *)(v10 + 43) + 4)) / 8 )
    return 0;
  if ( a5 )
  {
    v12 = *(_BYTE *)a5;
    if ( (unsigned __int8)(*(_BYTE *)a5 - 1) <= 1u )
    {
      v25 = 0;
      switch ( *(_BYTE *)a6 )
      {
        case 1:
          if ( v12 != 1 )
            return 0;
          v19 = *(_DWORD *)(a5 + 8);
          if ( (*(_DWORD *)(a1 + 84) != 8 || v19 == *(_DWORD *)(a1 + 484) || v19 == *(_DWORD *)(a1 + 488))
            && v19 != *(_DWORD *)(a1 + 56) )
          {
            return 0;
          }
          if ( !(unsigned __int8)sub_3393B0((unsigned __int64 *)&v25, a1, a3, v8, *(_DWORD *)(a6 + 8)) )
            return 0;
          goto LABEL_31;
        case 2:
          if ( *(_BYTE *)a5 != 2 )
          {
            v24 = sub_409F30((unsigned int *)a1, a5);
            if ( v24 == -1 || (*(_DWORD *)(a1 + 84) != 8 || (unsigned int)(v24 - 33) <= 1) && get_sreg() == -1 )
              return 0;
          }
          get_group_selector();
          v15 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(a6 + 8) + 16LL), *(_DWORD *)(a6 + 4), 0);
          v16 = v15 + 16 * sel2para();
          v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 16LL);
          if ( v16 != v17 )
          {
            v17 &= v16;
            if ( v16 == -1 )
              v17 = -1;
          }
          sub_11CDA0(a2);
          *(_BYTE *)a2 = 6;
          v18 = 8 * *(_DWORD *)(a1 + 84);
          if ( (unsigned __int64)v18 <= 0x3F )
            v17 &= ~(-1LL << v18);
          *(_QWORD *)(a2 + 8) = v17;
          return 1;
        case 4:
          if ( v12 != 1 )
            return 0;
          v22 = *(_DWORD *)(a5 + 8);
          if ( (*(_DWORD *)(a1 + 84) != 8 || v22 == *(_DWORD *)(a1 + 484) || v22 == *(_DWORD *)(a1 + 488))
            && v22 != *(_DWORD *)(a1 + 56) )
          {
            return 0;
          }
          v23 = *(_QWORD *)(a6 + 8);
          if ( !(unsigned __int8)sub_339470(&v25, a1, a3, v8, (int *)v23)
            || *(_DWORD *)v23 == 13 && (*(_BYTE *)(v23 + 32) != 1 || *(_DWORD *)(a1 + 400) != *(_DWORD *)(v23 + 40)) )
          {
            return 0;
          }
LABEL_31:
          v20 = v25;
          if ( v25 < 0 )
            return 0;
          sub_11CDA0(a2);
          *(_BYTE *)a2 = 5;
          v21 = (_QWORD *)j__qalloc_or_throw();
          *v21 = a3;
          v21[1] = v20;
          *(_QWORD *)(a2 + 8) = v21;
          break;
        case 6:
          goto LABEL_7;
        case 0xA:
          if ( v12 == 1 )
          {
            v14 = *(_DWORD *)(a5 + 8);
            if ( *(_DWORD *)(a1 + 484) == v14 || *(_DWORD *)(a1 + 488) == v14 )
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
  v25 = 0;
  if ( *(_BYTE *)a6 == 6 )
  {
LABEL_7:
    v13 = *(_DWORD *)(a3[187] + 152LL);
    if ( v13 != 11 && v13 != 4 || (*(_BYTE *)(a6 + 1) & 1) != 0 || (unsigned __int8)segtype() != 1 )
      return 0;
    sub_125180(a2, (unsigned __int8 *)a6);
    *(_BYTE *)(a2 + 1) |= 1u;
  }
  else
  {
    if ( *(_BYTE *)a6 != 10 )
      return 0;
LABEL_15:
    sub_123A40((__int64)v26, *(unsigned __int8 **)(a6 + 8));
    sub_11CA10((char *)a2, v26);
    sub_11CDA0((__int64)v26);
  }
  return 1;
}
