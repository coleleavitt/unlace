unsigned __int64 sub_117220()
{
  _BYTE v1[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v2; // [rsp+408h] [rbp-20h]

  v2 = __readfsqword(0x28u);
  sub_19C680(*((unsigned __int16 *)qword_252E68 + 4), v1, 1024);
  sub_108D20(684, v1);
  if ( !*((_BYTE *)qword_252E68 + 10) )
    sub_117030(qword_252E68);
  macro_t::isRecording[0] = 0;
  return v2 - __readfsqword(0x28u);
}

