__int64 __fastcall sub_AA6780(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 *i; // r12
  __int64 v6; // rdi

  sub_1817FC0(a2, a1 + 128);
  sub_18183E0(a2, "conflicts", *(unsigned int *)(a1 + 16));
  sub_18183E0(a2, "decisions", *(unsigned int *)(a1 + 24));
  sub_18183E0(a2, "propagations", (unsigned int)(*(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 12)));
  sub_18183E0(a2, "binary propagations", *(unsigned int *)(a1 + 12));
  sub_18183E0(a2, "restarts", *(unsigned int *)(a1 + 32));
  sub_18183E0(a2, "final checks", *(unsigned int *)(a1 + 36));
  sub_18183E0(a2, "added eqs", *(unsigned int *)(a1 + 28));
  sub_18183E0(a2, "mk clause", *(unsigned int *)(a1 + 56));
  sub_18183E0(a2, "mk clause binary", *(unsigned int *)(a1 + 64));
  sub_18183E0(a2, "del clause", *(unsigned int *)(a1 + 60));
  sub_18183E0(a2, "dyn ack", *(unsigned int *)(a1 + 72));
  sub_18183E0(a2, "interface eqs", *(unsigned int *)(a1 + 80));
  sub_18183E0(a2, "max generation", *(unsigned int *)(a1 + 84));
  sub_18183E0(a2, "minimized lits", *(unsigned int *)(a1 + 88));
  sub_18183E0(a2, "num checks", *(unsigned int *)(a1 + 92));
  sub_18183E0(a2, "mk bool var", (unsigned int)(*(_DWORD *)(a1 + 40) == 0) + *(_DWORD *)(a1 + 40) - 1);
  sub_9537B0(*(_QWORD **)(a1 + 7472));
  result = nullsub_736(a1 + 216, a2);
  v4 = *(__int64 **)(a1 + 8688);
  if ( v4 )
  {
    result = *((unsigned int *)v4 - 1);
    for ( i = &v4[result]; i != v4; result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 288LL))(
                                               v6,
                                               a2) )
      v6 = *v4++;
  }
  return result;
}

