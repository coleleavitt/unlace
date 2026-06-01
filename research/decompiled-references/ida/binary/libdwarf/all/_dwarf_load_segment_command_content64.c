__int64 __fastcall dwarf_load_segment_command_content64(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r15
  unsigned __int64 v8; // rax
  __int64 v11; // rcx
  unsigned int random; // r8d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  _BYTE buf[4]; // [rsp+10h] [rbp-88h] BYREF
  _BYTE v17[4]; // [rsp+14h] [rbp-84h] BYREF
  _BYTE v18[16]; // [rsp+18h] [rbp-80h] BYREF
  _BYTE v19[8]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v20[8]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v21[8]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v22[8]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v23[4]; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v24[4]; // [rsp+4Ch] [rbp-4Ch] BYREF
  _BYTE v25[4]; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v26[4]; // [rsp+54h] [rbp-44h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a2 + 16);
  v27 = __readfsqword(0x28u);
  if ( v5 < v6 || (v8 = *(_QWORD *)(a2 + 8), v5 < v8) || v5 < v6 + v8 )
  {
    *a5 = 416;
    return 1;
  }
  random = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), buf);
  if ( !random )
  {
    *(_QWORD *)a3 = 0;
    (*(void (__fastcall **)(__int64, _BYTE *, __int64, __int64, _QWORD))(a1 + 80))(a3, buf, 4, v11, 0);
    *(_QWORD *)(a3 + 8) = 0;
    (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a3 + 8, v17, 4);
    _dwarf_safe_strcpy(a3 + 16, 24, v18, 16);
    if ( (unsigned int)_dwarf_is_known_segname((char *)(a3 + 16)) )
    {
      *(_QWORD *)(a3 + 40) = 0;
      (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a3 + 40, v19, 8);
      *(_QWORD *)(a3 + 48) = 0;
      (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a3 + 48, v20, 8);
      *(_QWORD *)(a3 + 56) = 0;
      (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a3 + 56, v21, 8);
      *(_QWORD *)(a3 + 64) = 0;
      (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a3 + 64, v22, 8);
      v13 = *(_QWORD *)(a3 + 56);
      if ( v5 >= v13 )
      {
        v14 = *(_QWORD *)(a3 + 64);
        if ( v5 >= v14 && v5 >= v14 + v13 )
        {
          *(_QWORD *)(a3 + 72) = 0;
          (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a3 + 72, v23, 4);
          *(_QWORD *)(a3 + 80) = 0;
          (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a3 + 80, v24, 4);
          *(_QWORD *)(a3 + 88) = 0;
          (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a3 + 88, v25, 4);
          if ( *(_QWORD *)(a3 + 88) < *(_QWORD *)(a1 + 24) )
          {
            *(_QWORD *)(a3 + 96) = 0;
            (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 80))(a3 + 96, v26, 4);
            *(_QWORD *)(a3 + 104) = a4;
            random = 0;
            *(_QWORD *)(a3 + 112) = v6 + 72;
            return random;
          }
        }
      }
    }
    *a5 = 487;
    return 1;
  }
  return random;
}

