/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450C60
// Address: 0x00450C60

//----- (00450C60) --------------------------------------------------------
int __thiscall sub_450C60(void *this, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ebp
  unsigned int v5; // esi
  unsigned int v6; // ebx

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 4) + 72))(*((_DWORD *)this + 4))
    || !*((_DWORD *)this + 22) && (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 20))(this, 0) <= 0 )
  {
    return -1;
  }
  v4 = *((_DWORD *)this + 21);
  v5 = *((_DWORD *)this + 22);
  v6 = v5;
  if ( a3 < v5 )
    v6 = a3;
  sub_464310(a2, v4, v6);
  if ( v6 >= v5 )
  {
    *((_DWORD *)this + 22) = 0;
    return v6;
  }
  else
  {
    sub_464310(v4, v6 + v4, *((_DWORD *)this + 22) + *((_DWORD *)this + 21) - (v6 + v4));
    *((_DWORD *)this + 22) -= v6;
    return v6;
  }
}
