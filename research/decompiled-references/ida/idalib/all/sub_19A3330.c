char __fastcall sub_19A3330(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // r13
  unsigned int v9; // r12d
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  bool v16; // zf

  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 <= 3 )
    return sub_19A2FE0(a1, a2);
  if ( (*(_DWORD *)(a2 + 40) & 7) != 6 )
    return 0;
  v3 = *(_DWORD *)(*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v3 != 2 && v3 != 4 )
    return 0;
  v4 = a2;
  if ( sub_B74C70(a2) )
    return (unsigned int)sub_B76070(a2, a2, v5, v6) == 4;
  v7 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 97LL);
  if ( (v7 & 0x10) == 0 )
    goto LABEL_8;
  if ( (unsigned int)sub_B76070(a2, a2, v5, v6) <= 1 )
  {
    v7 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 97LL);
LABEL_8:
    v8 = 8;
    v9 = 1;
    goto LABEL_9;
  }
  a2 = sub_A63CE0(*(_QWORD **)(a1 + 248));
  v16 = !sub_199F900(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 120) + 8LL) + 48LL), a2);
  v7 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 97LL);
  if ( v16 )
    goto LABEL_8;
  v8 = 16;
  v9 = 2;
LABEL_9:
  if ( (v7 & 0x20) != 0 && (unsigned int)sub_B76070(v4, a2, v5, v6) > v9 )
  {
    v10 = *(_QWORD *)(a1 + 248);
    v11 = sub_183D310(a1);
    v15 = *(_QWORD *)(v11 + 48);
    if ( v15 )
      a2 = v15 & 0xFFFFFFFFFFFFFFF0LL;
    else
      a2 = sub_A7AA70(v10, v11, 0, v12, v13, v14);
    v9 -= !sub_199F900(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 120) + v8) + 48LL), a2) - 1;
  }
  return (unsigned int)sub_B76070(v4, a2, v5, v6) == v9;
}
