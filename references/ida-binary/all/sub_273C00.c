__int64 (__fastcall *__fastcall sub_273C00(__int64 a1, __int64 a2))()
{
  const char *v2; // rbx
  char *v3; // rax
  const char **v4; // rbx
  const char *v5; // r12
  size_t i; // rdx
  __int64 (__fastcall *result)(); // rax

  if ( *(_QWORD *)(a2 + 16) > 0x12u
    && (v2 = *(const char **)(a2 + 8), !strncmp(v2, "Plugins/Decompiler", 0x12u))
    && (v3 = strrchr(v2, 47)) != nullptr )
  {
    v4 = (const char **)off_860660;
    v5 = v3 + 1;
    for ( i = 8; strncmp(v5, *v4, i); i = strlen(*v4) )
    {
      if ( ++v4 == (const char **)&`vtable for'merge_progress_chooser_t )
        goto LABEL_8;
    }
    return (__int64 (__fastcall *)())&sub_275840;
  }
  else
  {
LABEL_8:
    switch ( *(_DWORD *)(a2 + 32) )
    {
      case 0xB:
        result = (__int64 (__fastcall *)())sub_273BA0;
        break;
      case 0xC:
        result = sub_273B40;
        break;
      case 0x11:
        result = (__int64 (__fastcall *)())sub_273B70;
        break;
      case 0x17:
      case 0x1D:
      case 0x1E:
      case 0x1F:
      case 0x20:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2A:
        result = (__int64 (__fastcall *)())sub_272850;
        break;
      case 0x1A:
        result = (__int64 (__fastcall *)())sub_273B10;
        break;
      case 0x24:
        result = (__int64 (__fastcall *)())sub_273BD0;
        break;
      default:
        result = sub_2757D0;
        break;
    }
  }
  return result;
}
