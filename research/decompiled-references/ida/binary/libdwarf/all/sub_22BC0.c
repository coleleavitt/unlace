unsigned __int64 __fastcall sub_22BC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *s)
{
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  __int64 v14; // r15
  __int64 v15; // rdx
  char *v16; // rax
  _BYTE v18[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]

  v11 = a4 + a5 + a3;
  v19 = __readfsqword(0x28u);
  if ( a2 )
    v12 = *(unsigned __int16 *)(a2 + 168);
  else
    v12 = *(unsigned __int8 *)(a1 + 280);
  if ( v11 % v12 )
  {
    v14 = a7 - a6;
    dwarfstring_constructor(v18);
    strlen(s);
    dwarfstring_append_printf_u(v18, "DW_DLE_DEBUG_FRAME_LENGTH_NOT_MULTIPLE len=0x%08llx", a3);
    dwarfstring_append_printf_u(v18, ", len size=0x%08llx", a4);
    dwarfstring_append_printf_u(v18, ", extn size=0x%08llx", a5);
    dwarfstring_append_printf_u(v18, ", totl length=0x%08llx", v11);
    dwarfstring_append_printf_u(v18, ", addr size=0x%08llx", v12);
    dwarfstring_append_printf_u(v18, ", mod=0x%08llx must be zero", v11 % v12);
    dwarfstring_append_printf_s();
    dwarfstring_append_printf_u(v18, ", offset 0x%08llx.", v14);
    v16 = (char *)dwarfstring_string(v18, ", offset 0x%08llx.", v15);
    dwarf_insert_harmless_error((Dwarf_Debug)a1, v16);
    dwarfstring_destructor(v18);
  }
  return v19 - __readfsqword(0x28u);
}

