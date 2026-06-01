__int64 __fastcall sub_305280(__int64 a1, __int64 a2, int a3)
{
  if ( a3 )
    return reg_str_get(a2, "InputDirectory", 0);
  else
    return reg_str_get(a2, "OutputDirectory", 0);
}
