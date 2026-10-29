__int64 __fastcall sub_441220(__int64 a1, unsigned __int64 a2)
{
  __int64 (*v3)(void); // rax
  unsigned __int64 *v4; // rax
  __int64 v5; // rdi
  __int64 (*v6)(); // rax

  if ( !*(_QWORD *)(a1 + 80) )
    return 0xFFFFFFFFLL;
  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v3 == (char *)sub_3D58E0 )
    v4 = (unsigned __int64 *)(a1 + 16);
  else
    v4 = (unsigned __int64 *)v3();
  if ( a2 < *v4 )
    return 0xFFFFFFFFLL;
  if ( a2 >= v4[1] )
    return 0xFFFFFFFFLL;
  if ( a2 != (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a2, 0) )
    return 0xFFFFFFFFLL;
  v5 = *(_QWORD *)(a1 + 80);
  v6 = *(__int64 (**)())(*(_QWORD *)v5 + 96LL);
  if ( v6 == sub_4404F0 )
    return 0xFFFFFFFFLL;
  else
    return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))v6)(
             v5,
             *(unsigned __int8 *)(a1 + 92),
             (unsigned int)a2,
             *(_QWORD *)(a1 + 64),
             *(unsigned int *)(a1 + 12));
}

