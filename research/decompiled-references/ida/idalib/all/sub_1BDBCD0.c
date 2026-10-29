__int64 __fastcall sub_1BDBCD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx

  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 2LL) & 1) != 0 && !**(_BYTE **)(a1 + 8) )
    return 0;
  v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 16) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v4 + 16) != 26 )
    v4 = sub_F63050(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 16) + 48LL) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
  v5 = (*(_BYTE *)(v4 + 18) >> 3) & 3;
  v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 24) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) != 26 )
    v6 = sub_F63050(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 24) + 48LL) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
  if ( ((*(_BYTE *)(v6 + 18) >> 3) & 3) == v5
    || (unsigned __int8)sub_B981D0(**(_QWORD ***)(a1 + 16), a2)
    || (unsigned __int8)sub_B981D0(**(_QWORD ***)(a1 + 24), a2)
    || **(_BYTE **)(a1 + 32)
    || (unsigned int)sub_1703830(**(_QWORD **)(a1 + 16), a2, v8, v9)
    && (unsigned int)sub_1703830(**(_QWORD **)(a1 + 24), a2, v10, v11) )
  {
    return 0;
  }
  else
  {
    return sub_1BDBAE0((_QWORD **)a1);
  }
}
