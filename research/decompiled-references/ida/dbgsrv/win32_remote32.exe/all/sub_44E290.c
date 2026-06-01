/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44E290
// Address: 0x0044E290

//----- (0044E290) --------------------------------------------------------
int __thiscall sub_44E290(volatile signed __int32 **this)
{
  volatile signed __int32 *v1; // esi
  int result; // eax

  v1 = *(this + 1);
  if ( v1 )
  {
    result = _InterlockedExchangeAdd(v1 + 1, 0xFFFFFFFF);
    if ( !result )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v1)(v1);
      if ( !_InterlockedDecrement(v1 + 2) )
        return (*(int (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
    }
  }
  return result;
}
