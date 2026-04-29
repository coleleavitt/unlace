__int64 __fastcall sub_1385E0(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 a5, unsigned int a6)
{
  unsigned int v6; // r14d
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  int v20; // r8d
  int v21; // r9d
  int flags; // eax
  int v23; // r8d
  __int64 v24; // rdx
  char data_value; // al
  int v26; // r8d
  unsigned __int64 v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int8 *v30; // rdi
  __int16 v31; // ax
  __int64 v32; // rdx
  __int64 v33; // rdi
  int v34; // r8d
  __int16 v35; // bx
  __int64 v36; // rbx
  int v37; // ecx
  __int64 _64bit; // rax
  __int64 not_tail; // rax
  int v40; // [rsp+Ch] [rbp-A4h]
  int v42; // [rsp+18h] [rbp-98h]
  int v43; // [rsp+18h] [rbp-98h]
  __int64 v44; // [rsp+18h] [rbp-98h]
  int v45; // [rsp+18h] [rbp-98h]
  __int64 v46; // [rsp+20h] [rbp-90h]
  unsigned __int8 v48; // [rsp+28h] [rbp-88h]
  unsigned __int64 v49; // [rsp+38h] [rbp-78h] BYREF
  char v50[16]; // [rsp+40h] [rbp-70h] BYREF
  unsigned __int8 v51[40]; // [rsp+50h] [rbp-60h] BYREF
  unsigned __int64 v52; // [rsp+78h] [rbp-38h]

  v10 = *(_QWORD *)(a1 + 64);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v52 = __readfsqword(0x28u);
  v12 = a6;
  v46 = v11;
  if ( !sub_1303B0(nullptr, v10, a5, a6) )
  {
    if ( (int)v12 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 84LL)
      || *(_BYTE *)a5 != 10
      || (v16 = *(_QWORD *)(a5 + 8), *(_BYTE *)v16 != 6)
      || (v17 = getseg(*(_QWORD *)(v16 + 8))) == 0
      || *(_BYTE *)(v17 + 184) != 1 )
    {
      LOBYTE(v6) = (_DWORD)v12 != -1 && (unsigned int)(*a3 - 1) > 1;
      if ( (_BYTE)v6 )
      {
        if ( !under_debugger )
          sub_37E160(52445);
        goto LABEL_73;
      }
      sub_11F840((__int64)v50, (unsigned __int8 *)a2);
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
            sub_118BA0((__int64)v50);
            return v6;
          }
          goto LABEL_12;
        }
        if ( (int *)a5 != a3 + 16 )
          goto LABEL_13;
      }
LABEL_15:
      v48 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *, __int64, __int64, __int64))(*(_QWORD *)v46 + 24LL))(
              v46,
              a2,
              *(_QWORD *)(a1 + 64),
              a3,
              a4,
              a5,
              v12);
      if ( !v48 )
        goto LABEL_13;
      if ( *(_BYTE *)a2 != 5 )
      {
        v15 = *(_QWORD *)(a1 + 64);
        goto LABEL_18;
      }
      v18 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
      if ( v18 >= 0 )
      {
        v15 = *(_QWORD *)(a1 + 64);
        if ( v18 >= *(_QWORD *)(v15 + 128) )
        {
          sub_118810((char *)a2, v50);
          goto LABEL_13;
        }
LABEL_18:
        if ( sub_1303B0(nullptr, v15, a2, v12) )
          goto LABEL_13;
        *(_DWORD *)(a2 + 4) = v12;
        if ( (_DWORD)v12 == -1 || *(_BYTE *)a2 != 6 )
        {
LABEL_21:
          v6 = v48;
          sub_118BA0((__int64)v50);
          return v6;
        }
        if ( (unsigned __int8)sub_33DC40(*(_QWORD *)(a1 + 480), *(_QWORD *)(a2 + 8), (int)v12) )
          a3[1] |= 0x20000u;
        v19 = *(_QWORD *)(a2 + 8);
        if ( !v19 )
        {
          if ( !(unsigned __int8)sub_325950(*(_QWORD *)(a1 + 480)) )
            goto LABEL_21;
          v19 = *(_QWORD *)(a2 + 8);
        }
        v20 = sub_33E560(*(_QWORD *)(a1 + 480), v19);
        if ( !v20 )
          goto LABEL_21;
        if ( *a3 == 1 )
        {
          sub_32C190(*(_QWORD *)(a1 + 64), *((_QWORD *)a3 + 3), 24, *(_QWORD *)(a2 + 8), v20, v21);
          goto LABEL_21;
        }
        if ( (*(_BYTE *)(v46 + 49) & 4) == 0 && v20 <= 1 )
          goto LABEL_21;
        v42 = v20;
        if ( (unsigned __int8)is_spec_ea(*(_QWORD *)(a2 + 8)) )
          goto LABEL_21;
        flags = get_flags_ex(*(_QWORD *)(a2 + 8), 4);
        v23 = v42;
        v24 = flags & 0x600;
        if ( v24 == 512 )
        {
          v40 = v42;
          v44 = *(_QWORD *)(a2 + 8);
          v31 = get_flags_ex(v44, 4);
          v33 = v44;
          v34 = v40;
          if ( (v31 & 0x600) == 0x200 )
          {
            not_tail = prev_not_tail(v44, 4, v32);
            v34 = v40;
            v33 = not_tail;
          }
          v45 = v34;
          flags = get_flags_ex(v33, 4);
          v23 = v45;
          if ( (_DWORD)v12 != *(unsigned __int8 *)(*(_QWORD *)(a1 + 480) + 130LL)
            && (_DWORD)v12 != *(_DWORD *)(v46 + 84) )
          {
            goto LABEL_21;
          }
          v24 = flags & 0x600;
        }
        else if ( *(unsigned __int8 *)(*(_QWORD *)(a1 + 480) + 130LL) != (_DWORD)v12
               && (_DWORD)v12 != *(_DWORD *)(v46 + 84) )
        {
          if ( v24 != 1024 || (flags & 0xE0000000) != 0x80000000LL )
            goto LABEL_21;
          goto LABEL_44;
        }
        if ( v24 != 1024 )
        {
          if ( v24 == 1536 )
            goto LABEL_21;
          goto LABEL_45;
        }
LABEL_44:
        if ( (flags & 0xF0000000) == 0x50000000 )
          goto LABEL_21;
LABEL_45:
        v43 = v23;
        data_value = get_data_value(&v49, *(_QWORD *)(a2 + 8), (int)v12);
        v26 = v43;
        if ( data_value )
        {
          v27 = v49;
          if ( (int)v12 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 84LL) )
          {
            _64bit = get_64bit(*(_QWORD *)(a2 + 8));
            v26 = v43;
            v27 = _64bit;
          }
          if ( v26 == 3 )
          {
            v35 = get_flags_ex(*(_QWORD *)(a2 + 8), 4);
            if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)(v46 + 84) )
            {
              v36 = v35 & 0x200;
              if ( !(_DWORD)v36
                && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 24LL) + 16LL) >= v27
                && (unsigned __int8)is_mapped(v27) )
              {
                *(_BYTE *)a2 = 6;
                v37 = 8 * *(_DWORD *)(v46 + 84);
                if ( (unsigned __int64)v37 <= 0x3F )
                  v36 = 1LL << v37;
                *(_QWORD *)(a2 + 8) = v27 & (v36 - 1);
                sub_118750((char *)a2, v46);
              }
            }
          }
          else
          {
            v28 = 10;
            v29 = *(_QWORD *)(a2 + 8);
            v30 = v51;
            while ( v28 )
            {
              *(_DWORD *)v30 = 0;
              v30 += 4;
              --v28;
            }
            sub_11C9F0(a2, *(_QWORD *)(a1 + 480), v29, v51, v27, v12, 0, *((_QWORD *)a3 + 3));
          }
        }
        goto LABEL_21;
      }
      if ( !under_debugger )
        sub_37E160(50441);
LABEL_73:
      BUG();
    }
  }
  return 0;
}
