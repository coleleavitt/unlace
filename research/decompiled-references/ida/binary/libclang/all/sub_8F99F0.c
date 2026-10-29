__int64 __fastcall sub_8F99F0(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  char v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20[11]; // [rsp+0h] [rbp-58h] BYREF

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v7 = a1 + 384;
        *(_QWORD *)(v7 + 416) = *a4;
        sub_8D8370(v7, a3);
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v8 = a1 + 384;
        *(_QWORD *)(v8 + 416) = *a4;
        sub_8D7CC0(v8, a3);
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v9 = a1 + 384;
        *(_QWORD *)(v9 + 416) = *a4;
        sub_8D8270(v9, a3);
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v10 = a1 + 384;
        *(_QWORD *)(v10 + 416) = *a4;
        sub_8D7BD0(v10, a3);
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v11 = a1 + 384;
        *(_QWORD *)(v11 + 416) = *a4;
        sub_8D8170(v11, a3);
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v12 = a1 + 384;
        *(_QWORD *)(v12 + 416) = *a4;
        sub_8D7AE0(v12, a3);
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v13 = a1 + 384;
        *(_QWORD *)(v13 + 416) = *a4;
        sub_8D8070(v13, a3);
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v14 = a1 + 384;
        *(_QWORD *)(v14 + 416) = *a4;
        sub_8D79F0(v14, a3);
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v15 = a1 + 384;
        *(_QWORD *)(v15 + 416) = *a4;
        sub_8D9030(v15, a3);
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v16 = a1 + 384;
        *(_QWORD *)(v16 + 416) = *a4;
        sub_8D8E80(v16, a3);
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        v17 = sub_8F4170(*(_QWORD *)(a1 + 568));
        v18 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v19 = (unsigned int)(*(_DWORD *)v18 + *(_DWORD *)(a3 + 8));
        sub_A1C030(v20, *(_QWORD *)(v18 + 24), v19, (unsigned int)v19);
        sub_781830(*(_QWORD *)a3);
        *(_BYTE *)sub_8F9850(v20) = v17;
        sub_A1C490(v20);
        sub_A1DB00(v20);
        sub_A1C0C0(v20);
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v6 = a1 + 384;
        *(_QWORD *)(v6 + 416) = *a4;
        sub_8D8D00(v6, a3);
      }
      break;
  }
  return 1;
}

