__int64 __fastcall sub_C91730(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rax
  unsigned int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rax
  unsigned int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned int v33; // eax
  _QWORD v41[4]; // [rsp+18h] [rbp-20h] BYREF

  v6 = a3;
  if ( (_DWORD)a2 == 12 )
  {
    switch ( (_DWORD)a3 )
    {
      case 0xC:
        v15 = sub_CC2920(*(_QWORD *)(a1 + 1264), a4);
        v16 = *(_QWORD *)(a1 + 1264);
        v17 = v15;
        v41[0] = a5 | 4;
        v18 = sub_CC2430(v16);
        v19 = ((unsigned int)sub_BDA860(a5, v18) >> 3) & 7;
        if ( (_BYTE)v19 == 7 )
          v19 = 1;
        return sub_D1E710(a1, v17, v19, v41);
      case 8:
        v22 = *(_QWORD *)(a1 + 1264);
        v41[0] = a5 | 4;
        v23 = sub_CC2430(v22);
        v24 = sub_BDA860(a5, v23);
        v27 = sub_A884B0(**(_QWORD **)(a1 + 1264), a4, v25, a4, v26);
        return sub_D22030(a1, v27, v24, v41);
      case 9:
        v28 = *(_QWORD *)(a1 + 1264);
        v41[0] = a5 | 4;
        v29 = sub_CC2430(v28);
        v30 = sub_BDA860(a5, v29);
        v33 = sub_A884B0(**(_QWORD **)(a1 + 1264), a4, v31, a4, v32);
        return sub_D21300(a1, v33, v30, v41);
      default:
        result = 0;
        if ( (unsigned int)a3 <= 0xB )
        {
          v8 = *(_QWORD *)(a1 + 1264);
          v41[0] = a5 | 4;
          v9 = sub_CC2430(v8);
          v10 = sub_BDA860(a5, v9);
          return sub_CED4A0(a1, v6, v10, v41);
        }
        break;
    }
  }
  else
  {
    result = 0;
    if ( (unsigned int)a2 <= 0xB )
    {
      if ( (_DWORD)a3 == 8 )
      {
        v13 = *(__int64 **)(a1 + 1264);
        v41[0] = a5 | 4;
        v14 = sub_A884B0(*v13, a4, a3, a4, a5 | 4);
        return sub_D28E90(a1, (unsigned int)a2, v14, v41);
      }
      else if ( (_DWORD)a3 == 9 )
      {
        v20 = *(__int64 **)(a1 + 1264);
        v41[0] = a5 | 4;
        v21 = sub_A884B0(*v20, a4, a3, a4, a5 | 4);
        return sub_D29200(a1, (unsigned int)a2, v21, v41);
      }
      else if ( (unsigned int)a3 > 0xB )
      {
        if ( (_DWORD)a3 == 12 )
        {
          v11 = sub_CC2920(*(_QWORD *)(a1 + 1264), a4);
          v41[0] = a5 | 4;
          v12 = sub_C91710(a1, a5);
          return sub_D28B30(a1, (unsigned int)a2, v11, v12, v41);
        }
      }
      else
      {
        result = 1;
        if ( (_DWORD)a2 != (_DWORD)a3 )
        {
          v41[0] = a5 | 4;
          return sub_D0BD20(a1, a2, a3, v41);
        }
      }
    }
  }
  return result;
}

