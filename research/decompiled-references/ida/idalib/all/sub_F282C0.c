__int64 __fastcall sub_F282C0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  char *v4; // rax
  __int64 v5; // kr08_8
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rdi

  v3 = sub_995540(*(_QWORD *)(a1 + 1096), " ");
  v4 = sub_B140F0(a2);
  v5 = sub_995540(v3, v4);
  v6 = *(_QWORD *)(a1 + 1096);
  switch ( *(_DWORD *)(a2 + 40) )
  {
    case 0:
      result = sub_995540(v6, " Vectorize");
      break;
    case 1:
      result = sub_995540(v6, " VectorizeWidth");
      break;
    case 2:
      result = sub_995540(v6, " Interleave");
      break;
    case 3:
      result = sub_995540(v6, " InterleaveCount");
      break;
    case 4:
      result = sub_995540(v6, " Unroll");
      break;
    case 5:
      result = sub_995540(v6, " UnrollCount");
      break;
    case 6:
      result = sub_995540(v6, " UnrollAndJam");
      break;
    case 7:
      result = sub_995540(v6, " UnrollAndJamCount");
      break;
    case 8:
      result = sub_995540(v6, " PipelineDisabled");
      break;
    case 9:
      result = sub_995540(v6, " PipelineInitiationInterval");
      break;
    case 0xA:
      result = sub_995540(v6, " Distribute");
      break;
    case 0xB:
      result = sub_995540(v6, " VectorizePredicate");
      break;
    default:
      result = v5;
      break;
  }
  v8 = *(_QWORD *)(a1 + 1096);
  switch ( *(_DWORD *)(a2 + 44) )
  {
    case 0:
      result = sub_995540(v8, " Enable");
      break;
    case 1:
      result = sub_995540(v8, " Disable");
      break;
    case 2:
      result = sub_995540(v8, " Numeric");
      break;
    case 3:
      result = sub_995540(v8, " FixedWidth");
      break;
    case 4:
      result = sub_995540(v8, " ScalableWidth");
      break;
    case 5:
      result = sub_995540(v8, " AssumeSafety");
      break;
    case 6:
      result = sub_995540(v8, " Full");
      break;
    default:
      return result;
  }
  return result;
}
