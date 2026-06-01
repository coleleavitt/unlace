unsigned __int64 sub_116E20()
{
  _BYTE v1[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v2; // [rsp+408h] [rbp-20h]

  v2 = __readfsqword(0x28u);
  sub_19BA80(*((unsigned __int16 *)qword_251CC8 + 4), v1, 1024);
  sub_108A90(684, v1);
  if ( !*((_BYTE *)qword_251CC8 + 10) )
    sub_116C30(qword_251CC8);
  macro_t::isRecording[0] = 0;
  return v2 - __readfsqword(0x28u);
}

