__int64 __fastcall sub_6D3DB0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  __int64 *v5; // rax
  __int64 result; // rax
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 *v18; // rax

  switch ( a2 )
  {
    case 1LL:
      v3 = *(_QWORD *)(a1 + 48);
      v4 = (__int64 *)(v3 + 18648);
      v5 = (__int64 *)(v3 + 18752);
      if ( a3 )
        v5 = v4;
      result = *v5;
      break;
    case 2LL:
      v7 = *(_QWORD *)(a1 + 48);
      v8 = (__int64 *)(v7 + 18712);
      v9 = (__int64 *)(v7 + 18760);
      if ( a3 )
        v9 = v8;
      result = *v9;
      break;
    case 4LL:
      v10 = *(_QWORD *)(a1 + 48);
      v11 = (__int64 *)(v10 + 18720);
      v12 = (__int64 *)(v10 + 18768);
      if ( a3 )
        v12 = v11;
      result = *v12;
      break;
    case 8LL:
      v13 = *(_QWORD *)(a1 + 48);
      v14 = (__int64 *)(v13 + 18736);
      v15 = (__int64 *)(v13 + 18784);
      if ( a3 )
        v15 = v14;
      result = *v15;
      break;
    case 16LL:
      v16 = *(_QWORD *)(a1 + 48);
      v17 = (__int64 *)(v16 + 18744);
      v18 = (__int64 *)(v16 + 18792);
      if ( a3 )
        v18 = v17;
      result = *v18;
      break;
    default:
      if ( !under_debugger )
        interr(3367);
      BUG();
  }
  return result;
}

