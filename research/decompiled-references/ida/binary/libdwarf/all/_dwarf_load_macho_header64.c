__int64 __fastcall dwarf_load_macho_header64(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // rax
  unsigned int v4; // r12d
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // [rsp+8h] [rbp-50h] BYREF
  int buf; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v15[4]; // [rsp+14h] [rbp-44h] BYREF
  _BYTE v16[4]; // [rsp+18h] [rbp-40h] BYREF
  _BYTE v17[4]; // [rsp+1Ch] [rbp-3Ch] BYREF
  _BYTE v18[4]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v19[4]; // [rsp+24h] [rbp-34h] BYREF
  _BYTE v20[4]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v21[12]; // [rsp+2Ch] [rbp-2Ch] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 24);
  v22 = __readfsqword(0x28u);
  v13 = 0;
  if ( v2 > 0x1F )
  {
    v4 = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), &buf);
    if ( v4 )
      return v4;
    v7 = buf;
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 96) = 0;
    *(_DWORD *)(a1 + 88) = v7;
    (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a1 + 96, v15, 4);
    *(_QWORD *)(a1 + 104) = 0;
    (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a1 + 104, v16, 4);
    *(_QWORD *)(a1 + 112) = 0;
    (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a1 + 112, v17, 4);
    *(_QWORD *)(a1 + 120) = 0;
    (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a1 + 120, v18, 4);
    *(_QWORD *)(a1 + 128) = 0;
    (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a1 + 128, v19, 4);
    *(_QWORD *)(a1 + 136) = 0;
    (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a1 + 136, v20, 4);
    *(_QWORD *)(a1 + 144) = 0;
    (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a1 + 144, v21, 4);
    v8 = *(_QWORD *)(a1 + 120);
    v9 = *(_QWORD *)(a1 + 128);
    *(_DWORD *)(a1 + 152) = v8;
    if ( (unsigned int)_dwarf_uint64_mult(v9, (unsigned int)v8, &v13, v10, v11, v12) != 1
      && v13 <= 0x752F
      && v13 < *(_QWORD *)(a1 + 24) )
    {
      *(_QWORD *)(a1 + 160) = 32;
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + 96);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 136);
      return v4;
    }
    *a2 = 486;
  }
  else
  {
    *a2 = 423;
  }
  return 1;
}

