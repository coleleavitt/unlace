__int64 __fastcall sub_13C7E0(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 a5, unsigned int a6)
{
  unsigned int v6; // r14d
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // r8d
  int v20; // r9d
  int flags; // eax
  int v22; // r8d
  __int64 v23; // rdx
  char data_value; // al
  int v25; // r8d
  unsigned __int64 v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int8 *v29; // rdi
  __int16 v30; // ax
  int v31; // r8d
  __int16 v32; // bx
  __int64 v33; // rbx
  int v34; // ecx
  __int64 _64bit; // rax
  int v37; // [rsp+18h] [rbp-98h]
  int v38; // [rsp+18h] [rbp-98h]
  int v39; // [rsp+18h] [rbp-98h]
  __int64 v40; // [rsp+20h] [rbp-90h]
  unsigned __int8 v42; // [rsp+28h] [rbp-88h]
  unsigned __int64 v43; // [rsp+38h] [rbp-78h]
  char v44[16]; // [rsp+40h] [rbp-70h] BYREF
  unsigned __int8 v45[40]; // [rsp+50h] [rbp-60h] BYREF
  unsigned __int64 v46; // [rsp+78h] [rbp-38h]

  v10 = *(_QWORD *)(a1 + 64);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v46 = __readfsqword(0x28u);
  v12 = a6;
  v40 = v11;
  if ( !sub_1345B0(nullptr, v10, a5, a6)
    && ((int)v12 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 84LL)
     || *(_BYTE *)a5 != 10
     || **(_BYTE **)(a5 + 8) != 6
     || (v16 = getseg()) == 0
     || *(_BYTE *)(v16 + 184) != 1) )
  {
    LOBYTE(v6) = (_DWORD)v12 != -1 && (unsigned int)(*a3 - 1) > 1;
    if ( (_BYTE)v6 )
    {
      if ( !under_debugger )
        sub_383060(52445);
      goto LABEL_73;
    }
    sub_123A40((__int64)v44, (unsigned __int8 *)a2);
    if ( (*(_BYTE *)(a5 + 1) & 0x20) != 0 )
    {
      v14 = *a3;
      if ( *a3 == 2 )
      {
LABEL_12:
        if ( (int *)a5 != a3 + 12 )
          goto LABEL_13;
        goto LABEL_15;
      }
      if ( v14 != 1 && v14 != 54 )
      {
        if ( v14 != 57 )
        {
LABEL_13:
          sub_11CDA0((__int64)v44);
          return v6;
        }
        goto LABEL_12;
      }
      if ( (int *)a5 != a3 + 16 )
        goto LABEL_13;
    }
LABEL_15:
    v42 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *, __int64, __int64, __int64))(*(_QWORD *)v40 + 24LL))(
            v40,
            a2,
            *(_QWORD *)(a1 + 64),
            a3,
            a4,
            a5,
            v12);
    if ( !v42 )
      goto LABEL_13;
    if ( *(_BYTE *)a2 != 5 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      goto LABEL_18;
    }
    v17 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
    if ( v17 >= 0 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v17 >= *(_QWORD *)(v15 + 128) )
      {
        sub_11CA10((char *)a2, v44);
        goto LABEL_13;
      }
LABEL_18:
      if ( sub_1345B0(nullptr, v15, a2, v12) )
        goto LABEL_13;
      *(_DWORD *)(a2 + 4) = v12;
      if ( (_DWORD)v12 == -1 || *(_BYTE *)a2 != 6 )
      {
LABEL_21:
        v6 = v42;
        sub_11CDA0((__int64)v44);
        return v6;
      }
      if ( (unsigned __int8)sub_342B40(*(_QWORD *)(a1 + 480), *(_QWORD *)(a2 + 8), (int)v12) )
        a3[1] |= 0x20000u;
      v18 = *(_QWORD *)(a2 + 8);
      if ( !v18 )
      {
        if ( !(unsigned __int8)sub_32A760(*(_QWORD *)(a1 + 480)) )
          goto LABEL_21;
        v18 = *(_QWORD *)(a2 + 8);
      }
      v19 = sub_343460(*(_QWORD *)(a1 + 480), v18);
      if ( !v19 )
        goto LABEL_21;
      if ( *a3 == 1 )
      {
        sub_3311F0(*(_QWORD *)(a1 + 64), *((_QWORD *)a3 + 3), 24, *(_QWORD *)(a2 + 8), v19, v20);
        goto LABEL_21;
      }
      if ( (*(_BYTE *)(v40 + 49) & 4) == 0 && v19 <= 1 )
        goto LABEL_21;
      v37 = v19;
      if ( (unsigned __int8)is_spec_ea() )
        goto LABEL_21;
      flags = get_flags_ex();
      v22 = v37;
      v23 = flags & 0x600;
      if ( v23 == 512 )
      {
        v30 = get_flags_ex();
        v31 = v37;
        if ( (v30 & 0x600) == 0x200 )
        {
          prev_not_tail();
          v31 = v37;
        }
        v39 = v31;
        flags = get_flags_ex();
        v22 = v39;
        if ( (_DWORD)v12 != *(unsigned __int8 *)(*(_QWORD *)(a1 + 480) + 130LL) && (_DWORD)v12 != *(_DWORD *)(v40 + 84) )
          goto LABEL_21;
        v23 = flags & 0x600;
      }
      else if ( *(unsigned __int8 *)(*(_QWORD *)(a1 + 480) + 130LL) != (_DWORD)v12
             && (_DWORD)v12 != *(_DWORD *)(v40 + 84) )
      {
        if ( v23 != 1024 || (flags & 0xE0000000) != 0x80000000LL )
          goto LABEL_21;
        goto LABEL_44;
      }
      if ( v23 != 1024 )
      {
        if ( v23 == 1536 )
          goto LABEL_21;
        goto LABEL_45;
      }
LABEL_44:
      if ( (flags & 0xF0000000) == 0x50000000 )
        goto LABEL_21;
LABEL_45:
      v38 = v22;
      data_value = get_data_value();
      v25 = v38;
      if ( data_value )
      {
        v26 = v43;
        if ( (int)v12 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 84LL) )
        {
          _64bit = get_64bit();
          v25 = v38;
          v26 = _64bit;
        }
        if ( v25 == 3 )
        {
          v32 = get_flags_ex();
          if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)(v40 + 84) )
          {
            v33 = v32 & 0x200;
            if ( !(_DWORD)v33
              && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 24LL) + 16LL) >= v26
              && (unsigned __int8)is_mapped() )
            {
              *(_BYTE *)a2 = 6;
              v34 = 8 * *(_DWORD *)(v40 + 84);
              if ( (unsigned __int64)v34 <= 0x3F )
                v33 = 1LL << v34;
              *(_QWORD *)(a2 + 8) = v26 & (v33 - 1);
              sub_11C950((char *)a2, v40);
            }
          }
        }
        else
        {
          v27 = 10;
          v28 = *(_QWORD *)(a2 + 8);
          v29 = v45;
          while ( v27 )
          {
            *(_DWORD *)v29 = 0;
            v29 += 4;
            --v27;
          }
          sub_120BF0(a2, *(_QWORD *)(a1 + 480), v28, v45, v26, v12, 0, *((_QWORD *)a3 + 3));
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
