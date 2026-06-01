void __fastcall sub_2F6200(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi

  if ( *(_BYTE *)(a1 + 160) )
  {
    v2 = *(__int64 **)(a2 + 8);
    if ( v2 )
    {
      v3 = &v2[*((unsigned int *)v2 - 1)];
      while ( v3 != v2 )
      {
        v4 = *v2++;
        sub_2F2620(a1, v4);
      }
    }
  }
  else if ( (unsigned __int8)sub_2F6090(a1 + 440, a2) )
  {
    sub_2EC9E0(a1);
  }
}

