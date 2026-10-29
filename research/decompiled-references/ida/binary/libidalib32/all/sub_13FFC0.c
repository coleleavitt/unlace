__int64 __fastcall sub_13FFC0(__int64 a1)
{
  if ( (unsigned __int8)netnode_inited() )
  {
    netnode_check();
    netnode_kill();
  }
  return sub_173E70(a1);
}

