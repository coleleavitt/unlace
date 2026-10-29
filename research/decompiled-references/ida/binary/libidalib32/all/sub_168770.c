unsigned __int64 __fastcall sub_168770(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 (__fastcall *v11)(__int64, _QWORD *); // rax
  _QWORD *view_options; // rax
  _QWORD v14[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 32) = a1 + 16;
  *(_QWORD *)(a1 + 40) = a1 + 16;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)a1 = &off_234A00;
  *(_QWORD *)(a1 + 56) = 0;
  sub_1765B0(a1, a2, a3, a4, a5, a6);
  v8 = a1 + 72;
  dto_init();
  if ( *(_BYTE *)(a1 + 64) )
    return v15 - __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 56);
  if ( !v9 )
    return v15 - __readfsqword(0x28u);
  if ( a3 )
  {
    switch ( a3 )
    {
      case 2:
        v10 = *(_QWORD *)(v9 + 856);
        break;
      case 3:
        v10 = *(_QWORD *)(v9 + 864);
        break;
      case 1:
        goto LABEL_7;
      default:
        return v15 - __readfsqword(0x28u);
    }
LABEL_8:
    if ( v10 )
    {
      if ( *(_DWORD *)(v9 + 924) == 1 )
        dto_copy_from_inf();
      dto_init();
      v11 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 280LL);
      if ( v11 == sub_157F50 )
      {
        view_options = (_QWORD *)get_view_options();
        v14[0] = *view_options;
        *(_QWORD *)((char *)v14 + 7) = *(_QWORD *)((char *)view_options + 7);
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD *, __int64))v11)(v9, v14, v10);
      }
      getinf_flag();
      get_view_options();
      dto_copy_from_inf();
      dto_copy_to_inf();
    }
    return v15 - __readfsqword(0x28u);
  }
  if ( *(_BYTE *)(v9 + 984) )
  {
    if ( !*(_QWORD *)(v9 + 480) )
      sub_1582F0(v8);
    if ( *(_DWORD *)(v9 + 472) == 1 )
    {
LABEL_7:
      v10 = *(_QWORD *)(v9 + 848);
      goto LABEL_8;
    }
  }
  return v15 - __readfsqword(0x28u);
}

