unsigned __int64 sub_117090()
{
  __int16 v0; // ax
  macro_t *v1; // rax
  __int64 v2; // rax
  unsigned __int8 v3; // r12
  macro_t *v4; // rbx
  macro_t *v5; // rdx
  __int16 v7; // [rsp+0h] [rbp-448h] BYREF
  unsigned __int16 v8; // [rsp+8h] [rbp-440h]
  _BYTE v9[1032]; // [rsp+20h] [rbp-428h] BYREF
  unsigned __int64 v10; // [rsp+428h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( macro_t::isRecording[0] )
  {
    TScreen::makeBeep(nullptr);
    if ( !byte_252E70 )
    {
      byte_252E70 = 1;
      sub_19C680(*((unsigned __int16 *)qword_252E68 + 4), v9, 1024);
      sub_F9540(664, v9);
      byte_252E70 = 0;
    }
  }
  else
  {
    sub_108D20(660);
    do
      TSystemInit::suspend((TSystemInit *)&v7);
    while ( !v7 );
    LOBYTE(v0) = v8;
    HIBYTE(v0) = HIBYTE(v8) & 0xFE;
    if ( v0 == -32256 )
    {
      sub_F9540(662);
    }
    else if ( v8 == 283 )
    {
      sub_108D20(661);
    }
    else
    {
      sub_19C680(v8, v9, 1024);
      sub_108D20(663, v9);
      v1 = sub_116DC0(v8);
      if ( v1 )
        sub_117030(v1);
      v2 = operator new(0xB0u);
      v3 = v8;
      v4 = (macro_t *)v2;
      *(_WORD *)(v2 + 8) = v8;
      if ( v3 )
        *(_WORD *)(v2 + 8) = LOBYTE((*__ctype_toupper_loc())[v3]);
      *((_BYTE *)v4 + 10) = 0;
      macro_t::isRecording[0] = 1;
      v5 = qword_252E68;
      qword_252E68 = v4;
      *(_QWORD *)v4 = v5;
    }
  }
  return v10 - __readfsqword(0x28u);
}

