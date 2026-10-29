__int64 __fastcall dwarf_load_macho_header(__int64 a1, _DWORD *a2)
{
  char v3; // al
  unsigned int v5; // r12d
  unsigned __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  int buf; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v16[4]; // [rsp+14h] [rbp-44h] BYREF
  _BYTE v17[4]; // [rsp+18h] [rbp-40h] BYREF
  _BYTE v18[4]; // [rsp+1Ch] [rbp-3Ch] BYREF
  _BYTE v19[4]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v20[4]; // [rsp+24h] [rbp-34h] BYREF
  _BYTE v21[16]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-20h]

  v3 = *(_BYTE *)(a1 + 56);
  v22 = __readfsqword(0x28u);
  if ( v3 == 32 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    v14 = 0;
    if ( v7 > 0x1B )
    {
      v5 = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), &buf);
      if ( v5 )
        return v5;
      v8 = buf;
      *(_QWORD *)(a1 + 88) = 0;
      *(_QWORD *)(a1 + 96) = 0;
      *(_DWORD *)(a1 + 88) = v8;
      (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a1 + 96, v16, 4);
      *(_QWORD *)(a1 + 104) = 0;
      (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a1 + 104, v17, 4);
      *(_QWORD *)(a1 + 112) = 0;
      (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a1 + 112, v18, 4);
      *(_QWORD *)(a1 + 120) = 0;
      (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a1 + 120, v19, 4);
      *(_QWORD *)(a1 + 128) = 0;
      (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a1 + 128, v20, 4);
      *(_QWORD *)(a1 + 136) = 0;
      (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a1 + 136, v21, 4);
      v9 = *(_QWORD *)(a1 + 120);
      v10 = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 144) = 0;
      *(_DWORD *)(a1 + 152) = v9;
      if ( (unsigned int)_dwarf_uint64_mult(v10, (unsigned int)v9, &v14, v11, v12, v13) != 1
        && v14 < *(_QWORD *)(a1 + 24)
        && v14 <= 0x752F )
      {
        *(_QWORD *)(a1 + 160) = 28;
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + 96);
        *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 136);
        return v5;
      }
      *a2 = 486;
    }
    else
    {
      *a2 = 423;
    }
    return 1;
  }
  if ( v3 != 64 )
  {
    *a2 = 415;
    return 1;
  }
  return _dwarf_load_macho_header64(a1, a2);
}

