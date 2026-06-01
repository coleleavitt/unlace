__int64 __fastcall get_segm_para(__int64 a1)
{
  if ( a1 )
    return sel2para(*(unsigned int *)(a1 + 28));
  else
    return 0;
}

