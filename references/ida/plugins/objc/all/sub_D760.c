__int64 *__fastcall sub_D760(__int64 a1, __int64 **a2)
{
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rax

  if ( !get_nice_colored_name() )
  {
    v4 = *a2;
    v5 = **a2;
    if ( (unsigned __int64)(*a2)[2] <= 9 )
    {
      v6 = qvector_reserve();
      *v4 = v6;
      v5 = v6;
    }
    v4[1] = 10;
    *(_QWORD *)v5 = 0x64656D616E6E753CLL;
    *(_BYTE *)(v5 + 8) = 62;
    *(_BYTE *)(*v4 + 9) = 0;
  }
  return sub_D6A0(*a2 + 3);
}
