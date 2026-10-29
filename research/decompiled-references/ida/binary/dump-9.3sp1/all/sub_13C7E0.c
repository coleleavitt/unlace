__int64 __fastcall sub_13C7E0(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 a5, unsigned int a6)
{
  unsigned int v6; // r14d
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // r8d
  int v22; // r9d
  int flags; // eax
  int v24; // r8d
  __int64 v25; // rdx
  char data_value; // al
  int v27; // r8d
  unsigned __int64 v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int8 *v31; // rdi
  __int16 v32; // ax
  int v33; // r8d
  __int16 v34; // bx
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 _64bit; // rax
  int v40; // [rsp+18h] [rbp-98h]
  int v41; // [rsp+18h] [rbp-98h]
  int v42; // [rsp+18h] [rbp-98h]
  __int64 v43; // [rsp+20h] [rbp-90h]
  unsigned __int8 v45; // [rsp+28h] [rbp-88h]
  unsigned __int64 v46; // [rsp+38h] [rbp-78h]
  char v47[16]; // [rsp+40h] [rbp-70h] BYREF
  unsigned __int8 v48[40]; // [rsp+50h] [rbp-60h] BYREF
  unsigned __int64 v49; // [rsp+78h] [rbp-38h]

  v10 = *(_QWORD *)(a1 + 64);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v49 = __readfsqword(0x28u);
  v12 = a6;
  v43 = v11;
  if ( !sub_1345B0(nullptr, v10, a5, a6)
    && ((int)v12 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 84LL)
     || *(_BYTE *)a5 != 10
     || **(_BYTE **)(a5 + 8) != 6
     || (v18 = getseg()) == 0
     || *(_BYTE *)(v18 + 184) != 1) )
  {
    LOBYTE(v6) = (_DWORD)v12 != -1 && (unsigned int)(*a3 - 1) > 1;
    if ( (_BYTE)v6 )
    {
      if ( !under_debugger )
        sub_383060(52445);
      goto LABEL_73;
    }
    sub_123A40((__int64)v47, (unsigned __int8 *)a2, v13, v14);
    if ( (*(_BYTE *)(a5 + 1) & 0x20) != 0 )
    {
      v16 = *a3;
      if ( *a3 == 2 )
      {
LABEL_12:
        if ( (int *)a5 != a3 + 12 )
          goto LABEL_13;
        goto LABEL_15;
      }
      if ( v16 != 1 && v16 != 54 )
      {
        if ( v16 != 57 )
        {
LABEL_13:
          sub_11CDA0((__int64)v47);
          return v6;
        }
        goto LABEL_12;
      }
      if ( (int *)a5 != a3 + 16 )
        goto LABEL_13;
    }
LABEL_15:
    v45 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *, __int64, __int64, __int64))(*(_QWORD *)v43 + 24LL))(
            v43,
            a2,
            *(_QWORD *)(a1 + 64),
            a3,
            a4,
            a5,
            v12);
    if ( !v45 )
      goto LABEL_13;
    if ( *(_BYTE *)a2 != 5 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      goto LABEL_18;
    }
    v19 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
    if ( v19 >= 0 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( v19 >= *(_QWORD *)(v17 + 128) )
      {
        sub_11CA10((char *)a2, v47);
        goto LABEL_13;
      }
LABEL_18:
      if ( sub_1345B0(nullptr, v17, a2, v12) )
        goto LABEL_13;
      *(_DWORD *)(a2 + 4) = v12;
      if ( (_DWORD)v12 == -1 || *(_BYTE *)a2 != 6 )
      {
LABEL_21:
        v6 = v45;
        sub_11CDA0((__int64)v47);
        return v6;
      }
      if ( (unsigned __int8)sub_342B40(*(_QWORD *)(a1 + 480), *(_QWORD *)(a2 + 8), (int)v12) )
        a3[1] |= 0x20000u;
      v20 = *(_QWORD *)(a2 + 8);
      if ( !v20 )
      {
        if ( !(unsigned __int8)sub_32A760(*(_QWORD *)(a1 + 480)) )
          goto LABEL_21;
        v20 = *(_QWORD *)(a2 + 8);
      }
      v21 = sub_343460(*(_QWORD *)(a1 + 480), v20);
      if ( !v21 )
        goto LABEL_21;
      if ( *a3 == 1 )
      {
        sub_3311F0(*(_QWORD *)(a1 + 64), *((_QWORD *)a3 + 3), 24, *(_QWORD *)(a2 + 8), v21, v22);
        goto LABEL_21;
      }
      if ( (*(_BYTE *)(v43 + 49) & 4) == 0 && v21 <= 1 )
        goto LABEL_21;
      v40 = v21;
      if ( (unsigned __int8)is_spec_ea() )
        goto LABEL_21;
      flags = get_flags_ex();
      v24 = v40;
      v25 = flags & 0x600;
      if ( v25 == 512 )
      {
        v32 = get_flags_ex();
        v33 = v40;
        if ( (v32 & 0x600) == 0x200 )
        {
          prev_not_tail();
          v33 = v40;
        }
        v42 = v33;
        flags = get_flags_ex();
        v24 = v42;
        if ( (_DWORD)v12 != *(unsigned __int8 *)(*(_QWORD *)(a1 + 480) + 130LL) && (_DWORD)v12 != *(_DWORD *)(v43 + 84) )
          goto LABEL_21;
        v25 = flags & 0x600;
      }
      else if ( *(unsigned __int8 *)(*(_QWORD *)(a1 + 480) + 130LL) != (_DWORD)v12
             && (_DWORD)v12 != *(_DWORD *)(v43 + 84) )
      {
        if ( v25 != 1024 || (flags & 0xE0000000) != 0x80000000LL )
          goto LABEL_21;
        goto LABEL_44;
      }
      if ( v25 != 1024 )
      {
        if ( v25 == 1536 )
          goto LABEL_21;
        goto LABEL_45;
      }
LABEL_44:
      if ( (flags & 0xF0000000) == 0x50000000 )
        goto LABEL_21;
LABEL_45:
      v41 = v24;
      data_value = get_data_value();
      v27 = v41;
      if ( data_value )
      {
        v28 = v46;
        if ( (int)v12 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 84LL) )
        {
          _64bit = get_64bit();
          v27 = v41;
          v28 = _64bit;
        }
        if ( v27 == 3 )
        {
          v34 = get_flags_ex();
          if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)(v43 + 84) )
          {
            v35 = v34 & 0x200;
            if ( !(_DWORD)v35
              && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 24LL) + 16LL) >= v28
              && (unsigned __int8)is_mapped() )
            {
              *(_BYTE *)a2 = 6;
              v37 = (unsigned int)(8 * *(_DWORD *)(v43 + 84));
              if ( (unsigned __int64)(int)v37 <= 0x3F )
                v35 = 1LL << (8 * *(_BYTE *)(v43 + 84));
              *(_QWORD *)(a2 + 8) = v28 & (v35 - 1);
              sub_11C950((unsigned __int8 *)a2, v43, v36, v37);
            }
          }
        }
        else
        {
          v29 = 10;
          v30 = *(_QWORD *)(a2 + 8);
          v31 = v48;
          while ( v29 )
          {
            *(_DWORD *)v31 = 0;
            v31 += 4;
            --v29;
          }
          sub_120BF0(a2, *(_QWORD *)(a1 + 480), v30, v48, v28, v12, 0, *((_QWORD *)a3 + 3));
        }
      }
      goto LABEL_21;
    }
    if ( !under_debugger )
      sub_383060(50441);
LABEL_73:
    BUG();
  }
  return 0;
}
