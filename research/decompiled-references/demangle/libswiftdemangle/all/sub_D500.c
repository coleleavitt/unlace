unsigned __int64 __fastcall sub_D500(_QWORD *a1, char a2, char a3)
{
  if ( a3 )
  {
    switch ( a2 )
    {
      case 'A':
        return sub_D400(a1, 169, "Actor");
      case 'C':
        return sub_D400(a1, 208, "CheckedContinuation");
      case 'c':
        return sub_D400(a1, 208, "UnsafeContinuation");
      case 'E':
        return sub_D400(a1, 208, "CancellationError");
      case 'e':
        return sub_D400(a1, 208, "UnownedSerialExecutor");
      case 'F':
        return sub_D400(a1, 169, "Executor");
      case 'f':
        return sub_D400(a1, 169, "SerialExecutor");
      case 'G':
        return sub_D400(a1, 208, "TaskGroup");
      case 'g':
        return sub_D400(a1, 208, "ThrowingTaskGroup");
      case 'I':
        return sub_D400(a1, 169, "AsyncIteratorProtocol");
      case 'i':
        return sub_D400(a1, 169, "AsyncSequence");
      case 'J':
        return sub_D400(a1, 208, "UnownedJob");
      case 'M':
        return sub_D400(a1, 22, "MainActor");
      case 'P':
        return sub_D400(a1, 208, "TaskPriority");
      case 'S':
        return sub_D400(a1, 208, "AsyncStream");
      case 's':
        return sub_D400(a1, 208, "AsyncThrowingStream");
      case 'T':
        return sub_D400(a1, 208, "Task");
      case 't':
        return sub_D400(a1, 208, "UnsafeCurrentTask");
      default:
        return 0;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 'A':
        return sub_D400(a1, 208, "AutoreleasingUnsafeMutablePointer");
      case 'a':
        return sub_D400(a1, 208, "Array");
      case 'b':
        return sub_D400(a1, 208, "Bool");
      case 'D':
        return sub_D400(a1, 208, "Dictionary");
      case 'd':
        return sub_D400(a1, 208, "Double");
      case 'f':
        return sub_D400(a1, 208, "Float");
      case 'h':
        return sub_D400(a1, 208, "Set");
      case 'I':
        return sub_D400(a1, 208, "DefaultIndices");
      case 'i':
        return sub_D400(a1, 208, "Int");
      case 'J':
        return sub_D400(a1, 208, "Character");
      case 'N':
        return sub_D400(a1, 208, "ClosedRange");
      case 'n':
        return sub_D400(a1, 208, "Range");
      case 'O':
        return sub_D400(a1, 208, "ObjectIdentifier");
      case 'P':
        return sub_D400(a1, 208, "UnsafePointer");
      case 'p':
        return sub_D400(a1, 208, "UnsafeMutablePointer");
      case 'R':
        return sub_D400(a1, 208, "UnsafeBufferPointer");
      case 'r':
        return sub_D400(a1, 208, "UnsafeMutableBufferPointer");
      case 'S':
        return sub_D400(a1, 208, "String");
      case 's':
        return sub_D400(a1, 208, "Substring");
      case 'u':
        return sub_D400(a1, 208, "UInt");
      case 'V':
        return sub_D400(a1, 208, "UnsafeRawPointer");
      case 'v':
        return sub_D400(a1, 208, "UnsafeMutableRawPointer");
      case 'W':
        return sub_D400(a1, 208, "UnsafeRawBufferPointer");
      case 'w':
        return sub_D400(a1, 208, "UnsafeMutableRawBufferPointer");
      case 'q':
        return sub_D400(a1, 58, "Optional");
      case 'B':
        return sub_D400(a1, 169, "BinaryFloatingPoint");
      case 'E':
        return sub_D400(a1, 169, "Encodable");
      case 'e':
        return sub_D400(a1, 169, "Decodable");
      case 'F':
        return sub_D400(a1, 169, "FloatingPoint");
      case 'G':
        return sub_D400(a1, 169, "RandomNumberGenerator");
      case 'H':
        return sub_D400(a1, 169, "Hashable");
      case 'j':
        return sub_D400(a1, 169, "Numeric");
      case 'K':
        return sub_D400(a1, 169, "BidirectionalCollection");
      case 'k':
        return sub_D400(a1, 169, "RandomAccessCollection");
      case 'L':
        return sub_D400(a1, 169, "Comparable");
      case 'l':
        return sub_D400(a1, 169, "Collection");
      case 'M':
        return sub_D400(a1, 169, "MutableCollection");
      case 'm':
        return sub_D400(a1, 169, "RangeReplaceableCollection");
      case 'Q':
        return sub_D400(a1, 169, "Equatable");
      case 'T':
        return sub_D400(a1, 169, "Sequence");
      case 't':
        return sub_D400(a1, 169, "IteratorProtocol");
      case 'U':
        return sub_D400(a1, 169, "UnsignedInteger");
      case 'X':
        return sub_D400(a1, 169, "RangeExpression");
      case 'x':
        return sub_D400(a1, 169, "Strideable");
      case 'Y':
        return sub_D400(a1, 169, "RawRepresentable");
      case 'y':
        return sub_D400(a1, 169, "StringProtocol");
      case 'Z':
        return sub_D400(a1, 169, "SignedInteger");
      case 'z':
        return sub_D400(a1, 169, "BinaryInteger");
      default:
        return 0;
    }
  }
}
