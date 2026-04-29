__int64 __fastcall sub_409FE0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v9; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  char v14; // al
  int v15; // eax
  int v16; // eax
  __int64 sreg; // rdi
  __int64 group_selector; // rbp
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rbp
  _QWORD *v25; // rax
  int v26; // eax
  __int64 v27; // rbp
  unsigned int v28; // eax
  __int64 v29; // [rsp+8h] [rbp-60h] BYREF
  char v30[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v9 = *(_QWORD *)(a4 + 24);
  v31 = __readfsqword(0x28u);
  v11 = sub_330F80(a3, v9);
  v12 = getseg(v11);
  if ( !v12 || *(_DWORD *)(a6 + 4) != (1 << (*(_BYTE *)(v12 + 43) + 4)) / 8 )
    return 0;
  if ( a5 )
  {
    v14 = *(_BYTE *)a5;
    if ( (unsigned __int8)(*(_BYTE *)a5 - 1) <= 1u )
    {
      v29 = 0;
      switch ( *(_BYTE *)a6 )
      {
        case 1:
          if ( v14 != 1 )
            return 0;
          v23 = *(_DWORD *)(a5 + 8);
          if ( (*(_DWORD *)(a1 + 84) != 8 || v23 == *(_DWORD *)(a1 + 484) || v23 == *(_DWORD *)(a1 + 488))
            && v23 != *(_DWORD *)(a1 + 56) )
          {
            return 0;
          }
          if ( !(unsigned __int8)sub_3393B0((unsigned __int64 *)&v29, a1, a3, v9, *(_DWORD *)(a6 + 8)) )
            return 0;
          goto LABEL_32;
        case 2:
          if ( *(_BYTE *)a5 == 2 )
          {
            sreg = *(_QWORD *)(*(_QWORD *)(a5 + 8) + 16LL);
          }
          else
          {
            v28 = sub_409F30((unsigned int *)a1, a5);
            if ( v28 == -1 )
              return 0;
            if ( *(_DWORD *)(a1 + 84) != 8 || (sreg = 0, v28 - 33 <= 1) )
            {
              sreg = get_sreg(v9, v28);
              if ( sreg == -1 )
                return 0;
            }
          }
          group_selector = get_group_selector(sreg);
          v19 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(a6 + 8) + 16LL), *(_DWORD *)(a6 + 4), 0);
          v20 = v19 + 16 * sel2para(group_selector);
          v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 16LL);
          if ( v20 != v21 )
          {
            v21 &= v20;
            if ( v20 == -1 )
              v21 = -1;
          }
          sub_11CDA0(a2);
          *(_BYTE *)a2 = 6;
          v22 = 8 * *(_DWORD *)(a1 + 84);
          if ( (unsigned __int64)v22 <= 0x3F )
            v21 &= ~(-1LL << v22);
          *(_QWORD *)(a2 + 8) = v21;
          break;
        case 4:
          if ( v14 != 1 )
            return 0;
          v26 = *(_DWORD *)(a5 + 8);
          if ( (*(_DWORD *)(a1 + 84) != 8 || v26 == *(_DWORD *)(a1 + 484) || v26 == *(_DWORD *)(a1 + 488))
            && v26 != *(_DWORD *)(a1 + 56) )
          {
            return 0;
          }
          v27 = *(_QWORD *)(a6 + 8);
          if ( !(unsigned __int8)sub_339470(&v29, a1, a3, v9, (int *)v27)
            || *(_DWORD *)v27 == 13 && (*(_BYTE *)(v27 + 32) != 1 || *(_DWORD *)(a1 + 400) != *(_DWORD *)(v27 + 40)) )
          {
            return 0;
          }
LABEL_32:
          v24 = v29;
          if ( v29 < 0 )
            return 0;
          sub_11CDA0(a2);
          *(_BYTE *)a2 = 5;
          v25 = (_QWORD *)j__qalloc_or_throw(16);
          *v25 = a3;
          v25[1] = v24;
          *(_QWORD *)(a2 + 8) = v25;
          return 1;
        case 6:
          goto LABEL_7;
        case 0xA:
          if ( v14 == 1 )
          {
            v16 = *(_DWORD *)(a5 + 8);
            if ( *(_DWORD *)(a1 + 484) == v16 || *(_DWORD *)(a1 + 488) == v16 )
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
  v29 = 0;
  if ( *(_BYTE *)a6 == 6 )
  {
LABEL_7:
    v15 = *(_DWORD *)(a3[187] + 152LL);
    if ( v15 != 11 && v15 != 4 || (*(_BYTE *)(a6 + 1) & 1) != 0 || (unsigned __int8)segtype(*(_QWORD *)(a6 + 8)) != 1 )
      return 0;
    sub_125180(a2, (unsigned __int8 *)a6);
    *(_BYTE *)(a2 + 1) |= 1u;
  }
  else
  {
    if ( *(_BYTE *)a6 != 10 )
      return 0;
LABEL_15:
    sub_123A40((__int64)v30, *(unsigned __int8 **)(a6 + 8));
    sub_11CA10((char *)a2, v30);
    sub_11CDA0((__int64)v30);
  }
  return 1;
}
